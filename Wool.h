#ifndef WOOL_H
#define WOOL_H
#include "Animal.h"
#include "Office.h"
#include "Field.h"
#include "Plant.h"
#include "Product.h"
#include <iostream>
#include<string.h>
#include <vector>
using namespace std;

class Wool:public Product{

    // Protected member variables:
private:
    double price;
    double kilogram;

    // Public member variables:
public:
    // Default Constructor
    Wool();

    // Parameterized Constructor:
    Wool(double price,double kilogram); 

    // Setter Function
    void SetPrice(double price);
    void SetKilogram(double kilogram);

    // Getter Function:
    double GetPrice();
    double GetKilogram();

    // Destructor:
    ~Wool();
};
#endif //WOOL_H