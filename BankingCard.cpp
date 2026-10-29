#include "BankingCard.h"
#include <iostream>

/// <summary>
/// Баланс карты
/// </summary>
/// <returns></returns>
int BankingCard::GetDeposit()
{
    return deposit;
}

/// <summary>
/// На данном примере рассматривается пример сокрытия функционала базового класса
/// </summary>
void BankingCard::PrintInfo()
{
	std::cout << "Banking card info" << std::endl;
}