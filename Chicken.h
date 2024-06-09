#ifndef CHICKEN_H
#define CHICKEN_H
#include "Vet.h"
#include "Animal.h"
#include "Egg.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Chicken : public Animal
{
    // Private Member Variable
private:
    double chicken_Price;
    double chicken_production_rate_per_month;
    bool chicken_Sick;
    string platoon;

    // Public Member Variole
public:
    // Default Constructor:
    Chicken();

    // Parametrized Constructor:
    Chicken(double chicken_price, double chicken_ProductionPMonth,bool chicken_sick,string platoon);

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
    bool isSick();
    void die();

    // Destructor;
    ~Chicken();
};
#endif //CHICKEN_H