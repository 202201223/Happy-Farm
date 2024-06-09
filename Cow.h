#ifndef COW_H
#define COW_H
#include "Vet.h"
#include "Animal.h"
#include "Milk.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cow : public Animal
{
    // Private Member Variable
private:
    double cow_Price;
    double cow_production_rate_per_month;
    bool cow_Sick;
    string platoon;

    // Public Member Variable
public:
    // Default Constructor:
    Cow();

    // Parametrized Constructor:
    Cow(double cow_price, double cow_ProductionPMonth, bool cow_sick, string platoon);

    // Setters Functions:
    void SetPrice(double price);
    void SetProductionRate(double productionRate);
    void SetSick(bool sick);
    void SetPlatoon(string platoon);

    // Getters Function:
    double GetPrice();
    int GetProductionRate();
    bool GetSick();
    string GetPlatoon();

    // Methods:
    void Produce();
    void Display();
    void isSick();
    void die();

    // Destructor;
    ~Cow();
};