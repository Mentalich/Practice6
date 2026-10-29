#include <iostream>
#include "PlasticCard.h"
#include "BankingCard.h"
#include "BankingService.cpp"

/// <summary>
/// Для красивого вывода перегрузим оператор консольного вывода
/// </summary>
/// <param name="os">Поток вывода</param>
/// <param name="client">Тип клиента</param>
/// <returns>Поток вывода для дальнейшей работы</returns>
std::ostream& operator<<(std::ostream& os, BankClientType client)
{
    switch (client)
    {
    case Generic:   os << "Usual client"; break;
    case SalaryClient:   os << "Salary client"; break;
    case PremiumClub: os << "Premium Club Member"; break;
    default:      os << "unknown"; break;
    }
    return os;
}

int main()
{
    BankingCard newBankingCard("PSB", BankClientType::SalaryClient, Owner("Zelenina", "Tatiana", "Nicolaevna"));
    std::cout << newBankingCard.owner.name << std::endl;
    std::cout << "Card number: " << newBankingCard.cardNumber << std::endl;
    std::cout << "Client type: " << newBankingCard.clientType << std::endl;
    newBankingCard.PrintInfo();

    BankingService::Motherlode(newBankingCard);
    std::cout << newBankingCard.GetDeposit() << std::endl;
    BankingService::SetCashback(newBankingCard);
    std::cout << newBankingCard.GetDeposit() << std::endl;
}