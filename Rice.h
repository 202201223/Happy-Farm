#ifndef RICE_H
#define RICE_H
#include "Plant.h"
#include <iostream>
#include <string>
using namespace std;
class Rice : public Plant {
    // Private Member 
private:
    int yearly_yield;
    double price;
    double Plant_Number;        
    double NumberPerTime; 
    // Public Member 
public:

    // Parametrized Constructor
    Rice(double yearly_yield, double price,double Plant_Number,double NumberPerTime);

    //Default Constructor
    Rice();

// Setters Functions
    void setYearYield(int YearYield);
    void setPrice(double price);
    void setPlantNumber(double PlantNumber);
    void setNumberPerTime(double NumberPerTime);

    // Getter Function
    int getYearYield();
    double getPrice();
    double getPlantNumber();
    double getNumberPerTime();

    //Methods
    void AddYield();
    void Display();

};

#endif //RICE_H