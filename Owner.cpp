#pragma once // Защита от переинициализации
#include <string>
using std::string;

/// <summary>
/// Структура владельца карты
/// </summary>
struct Owner
{
	string lastName; // Фамилия
	string name; // Имя
	string middleName; // Отчество
};