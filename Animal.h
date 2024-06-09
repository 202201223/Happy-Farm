#ifndef ANIMAL_H
#define ANIMAL_H
#include "Vet.h"
#include "Cow.h"
#include "Sheep.h"
#include "Chicken.h"
#include "Product.h"
#include "Milk.h"
#include "Wool.h"
#include "Egg.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal 
{
    // Protected Member Variable
protected:
    double Price;
    double production_rate_per_month;
    bool Sick;
    string platoon;

    // Public Member Variable
public:
    // Default Constructor:
    Animal();

    // Parametrized Constructors:
    Animal(double price, double production_rate_per_month, bool Sick, string platoon);

    Animal(AnimalType animal, Production product, double Price, double production_rate_per_month, bool Sick,string platoon);

    Animal(AnimalType animal, Production product);

    Animal(AnimalType animal);

    // Enumerations:
    enum AnimalType
    {
        COW = 1,
        SHEEP,
        CHICKEN,
    };
    enum Production
    {
        MILK = 1,
        WOOL,
        EGG,
    };

    // Setters Functions:
    void SetPrice(double price);
    void SetProductionRate(int productionRate);
    void SetSick(bool sick);
    void SetPlatoon(string platoon);

    // Getters Function:
    double GetPrice();
    int GetProductionRate();
    bool GetSick();
    string GetPlatoon();

    // Methods:
    virtual void Produce() = 0;
    virtual void Display() = 0;
    virtual bool isSick() = 0;
    virtual void die() = 0;
    Animal *TypeOfAnimal(AnimalType animal);
    Animal *TypeOfProduction(Production product);

    // Detractor;
    ~Animal();
};

#endif // ANIMAL_H