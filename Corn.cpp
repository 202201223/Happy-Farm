#include "Plant.h"
#include "Corn.h"
// Default Constructor
// Corn::Corn()
// {
//     yearly_yield = 0;
//     price = 0.0;
//     Plant_Number = 0;        
//     NumberPerTime = 0;
// }

// Parametrized Constructor
Corn::Corn(int yearly_yield, double price,double Plant_Number,double NumberPerTime):Plant(yearly_yield, price, Plant_Number, NumberPerTime)
{
    this->yearly_yield = yearly_yield;
    this->price = price;
    this->Plant_Number = Plant_Number;
    this->NumberPerTime = NumberPerTime;
}

// Setter Functions:
void Corn::setYearYield(int YearYield)
{
    yearly_yield = YearYield;
}
void Corn::setPrice(double price)
{
    price = price;
}
void Corn::setPlantNumber(double PlantNumber)
{
    Plant_Number = PlantNumber;
}
void Corn::setNumberPerTime(double NumberPerTime)
{
    NumberPerTime = NumberPerTime;
}

// Getter Functions
int Corn::getYearYield()
{
    return yearly_yield;
}
double Corn::getPrice()
{
    return price;
}
double Corn::getPlantNumber()
{
    return Plant_Number;
}
double Corn::getNumberPerTime()
{
    return NumberPerTime;
}

// Methods:
void Corn::AddYield()
{
    cout<<"ADD the Plant to the farm"<<endl;
    cout<<getPrice();

}
void Corn::Display()
{
    cout<<"The price of the plant"<<getPrice()<<endl;
    cout<<"the number of kilo that it yield each time "<<getNumberPerTime()<<endl;
    cout<<"the number that he needs "<<getPlantNumber()<<endl;
    cout<<"The yearly yield"<<getYearYield()<<endl;
}

 // Destructor
Corn::~Corn(){}