#include "Plant.h"
#include "Rice.h"
#include "Wheat.h"
#include "Corn.h"

Plant::plant()
{
   TypeOfPlant(type);
    yearly_yield =0;
    price =0.0;
    Plant_Number =0.0;
    NumberPerTime =0.0;
}

Plant::Plant(PlantType type, int yearly_yield, double price, double Plant_Number, double NumberPerTime)
{
    TypeOfPlant(type);
    this->yearly_yield = yearly_yield;
    this->price = price;
    this->Plant_Number = Plant_Number;
    this->NumberPerTime = NumberPerTime;
}

Plant::Plant(int yearly_yield, double price,double Plant_Number,double NumberPerTime)
{
    this->yearly_yield = yearly_yield;
    this->price = price;
    this->Plant_Number = Plant_Number;
    this->NumberPerTime = NumberPerTime;
}


// Setter Function
void Plant::setYearYield(int YearYield)
{
    yearly_yield = YearYield;
}
void Plant::setPrice(double price)
{
    price = price;
}
void Plant::setPlantNumber(double PlantNumber)
{
    Plant_Number = PlantNumber;
}
void Plant::setNumberPerTime(double NumberPerTime)
{
    NumberPerTime = NumberPerTime;
}

// Methods:
Plant* Plant::TypeOfPlant(PlantType type){
    if (type == RICE) {
        Rice* rice = new Rice(yearly_yield, price, Plant_Number, NumberPerTime);
        return rice;
    } else if (type == WHEAT) {
        Wheat* wheat = new Wheat(yearly_yield, price, Plant_Number, NumberPerTime);
        return wheat;
    } else if (type == CORN) {
        Corn* corn = new Corn(yearly_yield, price, Plant_Number, NumberPerTime);
        return corn;
    } else {
        cout << "Plant type not available" << endl;
    }
}