#ifndef PRODUCT_H
#define PRODUCT_H
#include "Animal.h"
#include "Office.h"
#include "Field.h"
#include "Plant.h"
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

class Product{
    // Public member variables:
public:
    // Enumeration:
    enum Unit
    {
        Liter =1,   //Milk
        Kilo,    //wool
        Number   //Egg
    };

    // Default Constructor
    Product();

    // Parametrized Constructor:
    Product(double price,Unit unit);    
    Product(double price);

        // Setter Function
        void SetPrice(double price);

    // Getter Function:
    double GetPrice();

    // Destructor:
    // ~Product();

 // Protected member variables:
protected:
    double price;
    vector<Unit> unite;

};
#endif //PRODUCT_H



