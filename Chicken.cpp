#include "Chicken.h"
#include "Animal.h"
// Default Constructor.
Chicken::Chicken()
{
    chicken_Price = 0.0;
    cow_production_rate_per_month = 0.0;
    cow_Sick = 0;
    platoon = "";
}

// Parameterized Constructor.

Chicken::Chicken(double chicken_price, double chicken_ProductionPMonth,bool chicken_sick,string platoon) : Animal(chicken_price, chicken_ProductionPMonth, chicken_sick, platoon)
{
    Price = chicken_Price;
    production_rate_per_month = chicken_ProductionPMonth;
    Sick = chicken_ProductionPMonth;
    platoon = platoon;
}

// Setters Functions.
void Chicken::SetPrice(double price) { chicken_price = price; }
void Chicken::SetProductionRate(double productionRate) { chicken_ProductionPMonth = production; }
void Chicken::SetSick(bool sick) { chicken_ProductionPMonth = sick; }
void Chicken::SetPlatoon(string platoon) { platoon = platoon; }

// Getters function
double Chicken::GetPrice() { return Price; }
int Chicken::GetProductionRate() { return ProductionRate; }
bool Chicken::GetSick() { return Sick; }
string Chicken::GetPlatoon() { return platoon; }

// Methods.
void Chicken::Produce()
{
    const int Egg_Per_Day = 1;
    int production_For_Today;
    cout << "Enter the amount of produced egg for today " << endl;
    cin >> production_For_Today;
    Chicken *chicken = new Chicken;
    if (production_For_Today == Egg_Per_Day)
    {
        Egg *egg = new Egg;
        cout << "this product will add to the farm" << endl;
        cout << egg->GetPrice() << endl;
        cout << chicken->GetPlatoon() << endl;
    }
    else
    {
        cout << "This Chicken may be sick " << endl;
        chicken->isSick() << endl;
    }
}

bool Chicken::isSick()
{
    if (sick == true)
    {
        cout << "this chicken is sick" << endl;
        return 1;
    }
    else
    {
        cout << "this chicken is not sick" << endl;
        return 0;
    }
}

void Chicken::die()
{
    cout << "This animal is died " << endl;
}

void Chicken::Display()
{
    cout << "The price for this Chicken is" << GetPrice() << endl;
    cout << "The production rate for this Chicken is" << GetProductionRate() << endl;
    cout << "The sick status for this Chicken is" << GetSick() << endl;
    cout << "The platoon for this Chicken is" << GetPlatoon() << endl;
}

// Destructor
Chicken::~Chicken() {}