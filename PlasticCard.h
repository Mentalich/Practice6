#pragma once // Защита от переинициализации
#include <string>
#include "Owner.cpp"
using std::string;

/// <summary>
/// Базовый класс пластиковой карты
/// </summary>
class PlasticCard
{
	/// <summary>
	/// Организация - издатель карты
	/// </summary>
	string orgName;

public:
	/// <summary>
	/// Владелец карты
	/// </summary>
	Owner owner;

public:
	PlasticCard(string orgName, Owner owner)
	{
		this->orgName = orgName;
		this->owner = owner;
	}

	PlasticCard(const char* orgName, const char* surname, const char* name, const char* middleName)
	{
		this->orgName = orgName;
		owner = Owner(surname, name, middleName);
	}

	void PrintInfo();
};

