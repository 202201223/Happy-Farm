#ifndef PLANT_H
#define PALNT_H
#include <iostream>
using namespace std;

class Plant
{
    // Public Members
public:
    // Enumeration
    enum PlantType
    {
        RICE,
        WHEAT,
        CORN
    };

    // Default Constructor
    plant();

    // Parametrized Constructor
    Plant(PlantType type, int yearly_yield, double price, double Plant_Number, double NumberPerTime);

    Plant(int yearly_yield, double price,double Plant_Number,double NumberPerTime);

    // Setters Functions
    void setYearYield(int YearYield);
    void setPrice(double price);
    void setPlantNumber(double PlantNumber);
    void setNumberPerTime(double NumberPerTime);

    // Getter Function
    virtual getYearYield() = 0;
    virtual double getPrice() = 0;
    virtual double getPlantNumber() = 0;
    virtual double getNumberPerTime() = 0;

    // Methods.
    virtual void AddYield() = 0;
    virtual void Display() = 0;
    Plant *TypeOfPlant(PlantType type);

    // Protected Member variable
protected:
    PlantType type;
    int yearly_yield;
    double price;
    double Plant_Number;  /*What the number that he needs*/
    double NumberPerTime; /*What is the number of kilo that it yield each time*/
};

#endif // PLANT_H