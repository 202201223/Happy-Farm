#ifndef SHEEP_H
#define SHEEP_H
#include "Vet.h"
#include "Animal.h"
#include "Wool.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Sheep : public Animal
{
    // Private Member Variable
private:
    double sheep_Price;
    double sheep_production_rate_per_month;
    bool sheep_Sick;
    string platoon;

    // Public Member Variable
public:
    // Default Constructor:
    Sheep();

    // Parametrized Constructor:
    Sheep(double sheep_Price, double sheep_ProductionPMonth, bool sheep_Sick,string platoon);

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
    ~Sheep();
};