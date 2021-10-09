#pragma once

#include <list>

template<typename T>
class Container
{
public:
	/// <summary>
	/// Конструктор
	/// </summary>
	Container();

	/// <summary>
	/// Деструктор
	/// </summary>
	~Container();

	/// <summary>
	/// Удаление первого элемента в списке
	/// </summary>
	void deleteFirst();

	/// <summary>
	/// Добавление элемента в конец списка
	/// </summary>
	/// <param name="data"></param>
	void add(T data);

	/// <summary>
	/// Очистить список
	/// </summary>
	void clear();

	/// <summary>
	/// Получить количество елементов в списке
	/// </summary>
	/// <returns></returns>
	int getSize() { return _size; }

	/// <summary>
	/// Перегруженный оператор [] 
	/// </summary>
	/// <param name="index"></param>
	/// <returns></returns>
	T& operator[](const int index);

	/// <summary>
	/// Добавление элемента в начало списка
	/// </summary>
	/// <param name="data"></param>
	void addFirst(T data);

	/// <summary>
	/// Добавление элемента в список по указанному индексу
	/// </summary>
	/// <param name="data"></param>
	/// <param name="index"></param>
	void addAt(T data, int index);

	/// <summary>
	/// Удаление элемента в списке по указанному индексу
	/// </summary>
	/// <param name="index"></param>
	void removeAt(int index);

	/// <summary>
	/// Удаление последнего элемента в списке
	/// </summary>
	void removeEnd();

private:
	/// <summary>
	/// Единица в контейнере
	/// </summary>
	/// <typeparam name="T"></typeparam>
	template<typename T>
	class Unit
	{
	public:
		Unit* pNext;
		T data;

		Unit(T data = T(), Unit* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};

	/// <summary>
	/// Размер
	/// </summary>
	int _size;

	/// <summary>
	/// Начальная единица
	/// </summary>
	Unit<T>* _head;
};

/// <summary>
/// Конструктор
/// </summary>
/// <typeparam name="T"></typeparam>
template<typename T>
inline Container<T>::Container()
{
	_size = 0;
	_head = nullptr;
}

/// <summary>
/// Деструктор
/// </summary>
/// <typeparam name="T"></typeparam>
template<typename T>
inline Container<T>::~Container()
{
	clear();
}

/// <summary>
/// Удаление первого элемента в списке
/// </summary>
/// <typeparam name="T"></typeparam>
template<typename T>
inline void Container<T>::deleteFirst()
{
	Unit<T>* temp = _head;

	_head = _head->pNext;

	delete temp;

	_size--;
}

/// <summary>
/// Добавление элемента в конец списка
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="data"></param>
template<typename T>
inline void Container<T>::add(T data)
{
	if (_head == nullptr)
	{
		_head = new Unit<T>(data);
	}
	else
	{
		Unit<T>* current = this->_head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Unit<T>(data);

	}

	_size++;
}

/// <summary>
/// Очистить список
/// </summary>
template<typename T>
inline void Container<T>::clear()
{
	while (_size)
	{
		deleteFirst();
	}
}

/// <summary>
/// Перегруженный оператор [] 
/// </summary>
/// <param name="index"></param>
/// <returns></returns>
template<typename T>
inline T& Container<T>::operator[](const int index)
{
	int counter = 0;

	Unit<T>* current = this->_head;

	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

/// <summary>
/// Добавление элемента в начало списка
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="data"></param>
template<typename T>
inline void Container<T>::addFirst(T data)
{
	_head = new Unit<T>(data, _head);
	_size++;
}

/// <summary>
/// Добавление элемента в список по указанному индексу
/// </summary>
/// <param name="data"></param>
/// <param name="index"></param>
template<typename T>
inline void Container<T>::addAt(T data, int index)
{
	if (index == 0)
	{
		addFirst(data);
	}
	else
	{
		Unit<T>* previous = this->_head;

		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}

		Unit<T>* newNode = new Unit<T>(data, previous->pNext);

		previous->pNext = newNode;

		_size++;
	}
}

/// <summary>
/// Удаление элемента в списке по указанному индексу
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="index"></param>
template<typename T>
inline void Container<T>::removeAt(int index)
{
	if (index == 0)
	{
		deleteFirst();
	}
	else
	{
		Unit<T>* previous = this->_head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}


		Unit<T>* toDelete = previous->pNext;

		previous->pNext = toDelete->pNext;

		delete toDelete;

		_size--;
	}
}

template<typename T>
inline void Container<T>::removeEnd()
{
	removeAt(_size - 1);
}

