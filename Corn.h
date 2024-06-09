#ifndef CORN_H
#define CORN_H
#include "Plant.h"
#include <iostream>
#include <string>
using namespace std;
class Corn : public Plant {
private:
    int yearly_yield;
    double price;
    double Plant_Number;        
    double NumberPerTime; 
    // Public Members

public:
    // Parametrized Constructor
    Corn(int yearly_yield, double price,double Plant_Number,double NumberPerTime);

    //Default Constructor
    Corn();

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
    ~Corn();
};

#endif //CORN_H

