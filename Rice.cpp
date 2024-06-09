#include "Plant.h"
#include "Rice.h"
// Default Constructor
Rice::Rice()
{
    yearly_yield = 0;
    price = 0.0;
    Plant_Number = 0;        
    NumberPerTime = 0;
}

// Parametrized Constructor
Rice::Rice(int yearly_yield, double price,double Plant_Number,double NumberPerTime):Plant(yearly_yield, price, plant_number, NumberPerTime)
{
    this->yearly_yield = yearly_yield;
    this->price = price;
    this->Plant_Number = Plant_Number;
    this->NumberPerTime = NumberPerTime;
}

// Setter Functions:
void Rice::setYearYield(int YearYield)
{
    yearly_yield = yearly_yield;
}
void Rice::setPrice(double price)
{
    price = price;
}
void Rice::setPlantNumber(double PlantNumber)
{
    Plant_Number = PlantNumber;
}
void Rice::setNumberPerTime(double NumberPerTime)
{
    NumberPerTime = NumberPerTime;
}

// Getter Functions
int Rice::getYearYield()
{
    return yearly_yield;
}
double Rice::getPrice()
{
    return price;
}
double Rice::getPlantNumber()
{
    return Plant_Number;
}
double Rice::getNumberPerTime()
{
    return NumberPerTime;
}

// Methods:
void Rice::AddYield()
{
    cout<<"ADD the Plant to the farm"<<endl;
    cout<<getPrice();

}
void Rice::Display()
{
    cout<<"The price of the plant"<<getPrice()<<endl;
    cout<<"the number of kilo that it yield each time "<<getNumberPerTime()<<endl;
    cout<<"the number that he needs "<<getPlantNumber()<<endl;
    cout<<"The yearly yield"<<getYearYield()<<endl;
}

 // Destructor
Rice::~Rice(){}