#include "Vet.h"
#include "Person.h"
#include "Animal.h"
#include <string>
#include <vector>

// Default Constructor
Animal::Animal()
{
    Price = 0.0; 
    production_rate_per_month = 0;
    Sick = 0;
    platoon = "";
}

// Parametrized Constructors
Animal::Animal(AnimalType animal, Production product, double Price, double production_rate_per_month, bool Sick,string platoon)
{
    TypeOfAnimal(animal);
    TypeOfProduction(product);
    this->Price = Price;
    this->production_rate_per_month = production_rate_per_month;
    this->Sick = Sick;
    this->platoon = platoon;
}

Animal::Animal(double price, double production_rate_per_month, bool Sick, string platoon)
{
    Price = price;
    this->production_rate_per_month = production_rate_per_month;
    this->Sick = Sick;
    this->platoon = platoon;
}

Animal::Animal(AnimalType animal, Production product)
{
    TypeOfAnimal(animal);
    TypeOfProduction(product);
}

Animal::Animal(AnimalType animal)
{
    TypeOfAnimal(animal);
}

//  Setter Function:
void Animal::SetPrice(double price){Price = price;}
void Animal::SetProductionRate(int productionRate){production_rate_per_month = productionRate;}
void Animal::SetSick(bool sick){Sick = sick;}
void Animal::SetPlatoon(string platoon){platoon = platoon;}

// Getters Function:
double Animal::GetPrice(){return Price;}
int Animal::GetProductionRate(){return ProductionRate;}
bool Animal:: GetSick(){return Sick;}
string Animal::GetPlatoon(){return platoon;}

// Methods
Animal *Animal::TypeOfAnimal(AnimalType animal){
    if (animal == COW)
    {
        Cow *cow = new Cow(Price, production_rate_per_month,Sick,platoon);
        return cow;
    }
    else if (animal == SHEEP)
    {
        Sheep *sheep = new Sheep(Price, production_rate_per_month,Sick,platoon);
        return sheep;
    }
    else if (animal == CHICKEN)
    {
        Chicken *chicken = new Chicken(Price, production_rate_per_month,Sick,platoon);
        return chicken;
    }
}

Animal *Animal::TypeOfProduction(Production product){
    if (product == MILK)
    {
        Milk *milk = new Milk(Price);
        return milk;
    }
    else if (product == WOOL)
    {
        Wool *wool = new Wool(Price);
        return wool;
    }
    else if (product == EGG)
    {
        Egg *egg = new Egg(Price);
        return egg;
    }
}

// Destructor
Animal::~Animal(){}


