#include <string>
using std::string;

class TestDataGenerator
{
	/// <summary>
	/// Генерирует строку - номер любой длины
	/// </summary>
	/// <param name="length">длина строки</param>
	/// <returns></returns>
	static string GenerateNumber(int length)
	{
		string num;
		for (int i = 0; i < length; i++)
		{
			auto temp = rand() % 10;
			num += std::to_string(temp);
		}
		return num;
	}

public:
	/// <summary>
	/// Генерирует случайный CVC-номер
	/// </summary>
	/// <returns>Строку с тремя числами</returns>
	static string GetCVC()
	{
		return GenerateNumber(3);
	}

	/// <summary>
	/// Генерирует случайный номер карты
	/// </summary>
	/// <returns>Шестнадцатизначную строку с числами</returns>
	static string GetCardNumber()
	{
		return GenerateNumber(16);
	}
};