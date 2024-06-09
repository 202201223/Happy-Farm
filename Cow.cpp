#include "Cow.h"
#include "Animal.h"
// Default Constructor.
Cow::Cow()
{
    cow_Price = 0.0;
    cow_production_rate_per_month = 0.0;
    cow_Sick = 0;
    platoon = "";
}

// Parameterized Constructor.

Cow::Cow(double cow_price, double cow_ProductionPMonth, bool cow_sick, string platoon) : Animal(cow_price, cow_ProductionPMonth, cow_sick, platoon)
{
    Price = cow_Price;
    production_rate_per_month = cow_production_rate_per_month;
    Sick = cow_sick;
    platoon = platoon;
}

// Setters Functions.
void Cow::SetPrice(double price) { cow_Price = price; }
void Cow::SetProductionRate(double productionRate) { cow_ProductionPMonth = production; }
void Cow::SetSick(bool sick) { cow_Sick = sick; }
void Cow::SetPlatoon(string platoon) { platoon = platoon; }

// Getters function
double Cow::GetPrice() { return Price; }
int Cow::GetProductionRate() { return ProductionRate; }
bool Cow::GetSick() { return Sick; }
string Cow::GetPlatoon() { return platoon; }

// Methods.
void Cow::Produce()
{
    const int Milk_Per_Day = 15;
    int production_For_Today;
    cout << "Enter the amount of produced milk for today " << endl;
    cin >> production_For_Today;
    Cow *cow = new Cow;
    if (production_For_Today == Milk_Per_Day)
    {
        Milk *milk = new Milk;
        cout << "this product will add to the farm" << endl;
        cout << milk->GetPrice() << endl;
        cout << cow->GetPlatoon() << endl;
    }
    else
    {
        cout << "This Cow may be sick " << endl;
        cow->isSick() << endl;
    }
}

void Cow::isSick()
{
    if (sick == true)
    {
        cout << "this cow is sick" << endl;
    }
    else
    {
        cout << "this cow is not sick" << endl;
    }
}

void Cow::die()
{
    cout << "This animal is died " << endl;
}

void Cow::Display()
{
    cout << "The price for this cow is" << GetPrice() << endl;
    cout << "The production rate for this cow is" << GetProductionRate() << endl;
    cout << "The sick status for this cow is" << GetSick() << endl;
    cout << "The platoon for this cow is" << GetPlatoon() << endl;
}

// Destructor
Cow::~Cow() {}