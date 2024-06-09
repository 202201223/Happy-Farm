#include "Plant.h"
#include "Wheat.h"
// Default Constructor
Wheat::Wheat()
{
    yearly_yield = 0;
    price = 0.0;
    Plant_Number = 0;        
    NumberPerTime = 0;
}

// Parametrized Constructor
Wheat::Wheat(int yearly_yield, double price,double Plant_Number,double NumberPerTime):Plant(yearly_yield, price, plant_number, NumberPerTime)
{
    this->yearly_yield = yearly_yield;
    this->price = price;
    this->Plant_Number = Plant_Number;
    this->NumberPerTime = NumberPerTime;
}

// Setter Functions:
void Wheat::setYearYield(int YearYield)
{
    yearly_yield = YearYield;
}
void Wheat::setPrice(double price)
{
    price = price;
}
void Wheat::setPlantNumber(double PlantNumber)
{
    Plant_Number = PlantNumber;
}
void Wheat::setNumberPerTime(double NumberPerTime)
{
    NumberPerTime = NumberPerTime;
}

// Getter Functions
int Wheat::getYearYield()
{
    return yearly_yield;
}
double Wheat::getPrice()
{
    return price;
}
double Wheat::getPlantNumber()
{
    return Plant_Number;
}
double Wheat::getNumberPerTime()
{
    return NumberPerTime;
}

// Methods:
void Wheat::AddYield()
{
    cout<<"ADD the Plant to the farm"<<endl;
    cout<<getPrice();
}
void Wheat::Display()
{
    cout<<"The price of the plant"<<getPrice()<<endl;
    cout<<"the number of kilo that it yield each time "<<getNumberPerTime()<<endl;
    cout<<"the number that he needs "<<getPlantNumber()<<endl;
    cout<<"The yearly yield"<<getYearYield()<<endl;
}

// Destructor
Wheat::~Wheat(){}