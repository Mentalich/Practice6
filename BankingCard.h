#pragma once
#include "PlasticCard.h"
#include "BankClientType.cpp"
#include "TestDataGenerator.cpp"

class BankingCard :
    public PlasticCard
{
    friend class BankingService;

    /// <summary>
    /// трех-значный код на обороте карты
    /// </summary>
    string cvc;

    /// <summary>
    /// Баланс карты
    /// </summary>
    int deposit;
public:
    /// <summary>
    /// Номер карты
    /// </summary>
    string cardNumber;

    /// <summary>
    /// Тип банковского клиента
    /// </summary>
    BankClientType clientType;

    /// <summary>
    /// Баланс карты
    /// </summary>
    /// <returns>Целое число - баланс карты</returns>
    int GetDeposit();

    void PrintInfo();

    // конструкторы
    BankingCard(string orgName, Owner owner) : PlasticCard(orgName, owner)
    {
        cvc = TestDataGenerator::GetCVC();
        cardNumber = TestDataGenerator::GetCardNumber();
        clientType = BankClientType::Generic;
        deposit = 0;
    }

    BankingCard(string orgName, BankClientType clientType, Owner owner) : PlasticCard(orgName, owner)
    {
        cvc = TestDataGenerator::GetCVC();
        cardNumber = TestDataGenerator::GetCardNumber();
        this->clientType = clientType;
        deposit = 0;
    }

    BankingCard(const char* orgName, const char* surname, const char* name, const char* middleName) : PlasticCard(orgName, surname, name, middleName)
    {
        cvc = TestDataGenerator::GetCVC();
        cardNumber = TestDataGenerator::GetCardNumber();
        clientType = BankClientType::Generic;
        deposit = 0;
    }
};

