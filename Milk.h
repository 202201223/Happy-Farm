#ifndef MILK_H
#define MILK_H
#include "Animal.h"
#include "Office.h"
#include "Field.h"
#include "Plant.h"
#include <iostream>
#include<string.h>
#include <vector>
using namespace std;

class Milk:public Product{

    // Protected member variables:
private:
    double price;
    double Litters;

    // Public member variables:
public:

    // Default Constructor
    Milk();

    // Parametrized Constructor:
    Milk(double price,double Litters) ;

    // Setter Function
    void SetPrice(double price);
    void SetLitters(double litters);

    // Getter Function:
    double GetPrice();
    double GetLitters();

    // Destructor:
    ~Milk();
};

#endif //MILK_H

