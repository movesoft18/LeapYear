// LeapYear.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "LeapYear.h"

// Разместите здесь код функции, определяющей, является ли указанный год високосным
bool IsLeapYear(int year)
{
	if (year < 0) return false;
	if (year % 400 == 0) return true;
	if (year % 100 == 0) return false;
	if (year % 4 == 0) return true;
	return false;
}
