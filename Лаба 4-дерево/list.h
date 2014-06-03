﻿/**
@class list
@brief
Класс, реализующий список объектов класса unit
@note
С его помощью я храню список сыновей определённого узла. Содержит методы добавления элемента в конец списка, получения элемента вершины.
*/

#pragma once
#include "unit.h"

class list
{
private:
	/**
	@brief
	Указатель на головной элемент списка.
	*/
	unit* head;
public:
	/**
	@brief
	Создание и инициализация списка.
	@param a
	Значение первого элемента.
	@param dad
	Ссылка на элемент-родитель списка.
	*/
	list(int a, unit* dad);
	~list();

	/**
	@brief
	Добавление элемента в конец списка.
	@param a
	Значение элемента.
	*/
	void add(int a);

	/**
	@brief
	Возврашает головной элемент списка.
	*/
	unit* getHead();
};