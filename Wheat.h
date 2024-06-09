#ifndef WHEAT_H
#define WHEAT_H
#include "Plant.h"
#include <iostream>
#include <string>
using namespace std;


class Wheat : public Plant {

    // Private Members 
private:
    int yearly_yield;
    double price;
    double Plant_Number;        
    double NumberPerTime; 
    // Public Members

public:
    // Parametrized Constructor
    Wheat(int yearly_yield, double price,double Plant_Number,double NumberPerTime);

    //Default Constructor
    Wheat();

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

    // Destructor
    ~Wheat();
};

#endif //WHEAT_H
