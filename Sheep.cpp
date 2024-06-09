#include "Sheep.h"
#include "Animal.h"
// Default Constructor.
Sheep::Sheep()
{
    chicken_Price = 0.0;
    cow_production_rate_per_month = 0.0;
    cow_Sick = 0;
    platoon = "";
}

// Parameterized Constructor.

Sheep::Sheep(double sheep_Price, double sheep_ProductionPMonth, bool sheep_Sick,string platoon) : Animal(sheep_Price, sheep_ProductionPMonth, sheep_Sick, platoon)
{
    Price = sheep_Price;
    production_rate_per_month = sheep_ProductionPMonth;
    Sick = sheep_Sick;
    platoon = platoon;
}

// Setters Functions.
void Sheep::SetPrice(double price) { sheep_Price = price; }
void Sheep::SetProductionRate(double productionRate) { sheep_ProductionPMonth = production; }
void Sheep::SetSick(bool sick) { sheep_Sick = sick; }
void Sheep:SetPlatoon(string platoon) { platoon = platoon; }

// Getters function
double Sheep::GetPrice() { return Price; }
int Sheep::GetProductionRate() { return ProductionRate; }
bool Sheep::GetSick() { return Sick; }
string Sheep::GetPlatoon() { return platoon; }

// Methods.
void Sheep::Produce()
{
    const int Wool_Per_Month = 5;
    int production_For_Month;
    cout << "Enter the amount of produced wool for this month " << endl;
    cin >> production_For_Month;
    Sheep *sheep = new Sheep;
    if (production_For_TMonth == Wool_Per_Month)
    {
        Wool *wool = new Wool;
        cout << "this product will add to the farm" << endl;
        cout << wool->GetPrice() << endl;
        cout << sheep->GetPlatoon() << endl;
    }
    else
    {
        cout << "This Chicken may be sick " << endl;
        sheep->isSick() << endl;
    }
}

void Sheep::isSick()
{
    if (sick == true)
    {
        cout << "this sheep is sick" << endl;
    }
    else
    {
        cout << "this sheep is not sick" << endl;
    }
}

void Sheep::die()
{
    cout << "This animal is died " << endl;
}

void Sheep::Display()
{
    cout << "The price for this Sheep is" << GetPrice() << endl;
    cout << "The production rate for this Sheep is" << GetSick() << endl;
    cout << "The platoon for this Sheep is" << GetPlatoon() << endl;
}

// Destructor
Sheep::~Sheep() {}