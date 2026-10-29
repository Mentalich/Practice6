#include "BankingCard.h"

class BankingService
{
public:
	static void Motherlode(BankingCard &card)
	{
		card.deposit += 50000;
	}

	/// <summary>
	/// Кэшбек в конце месяца по остатку на карте
	/// </summary>
	/// <param name="card"></param>
	static void SetCashback(BankingCard &card)
	{
		switch (card.clientType)
		{
		case BankClientType::SalaryClient:
			card.deposit *= 1.03;
			break;
		case BankClientType::PremiumClub:
			card.deposit *= 1.05;
			break;
		default:
			card.deposit *= 1.01;
			break;
		}
	}
};