#include "Product.h"

// Default constructor:
Product::Product()
{
    price = 0.0;
}

//Parametrized  Constructor  
Product::Product(double price,Unit unit)
{
    this->price = price;
    this->unite.push_back(unit);
}
Product::Product(double price){
    this->price = price;
}

// Setter Function
void Product::SetPrice(double price)
{
    price = price;
}

// Getter Function
double Product::GetPrice()
{
    return price;
}

// Destructor
// Product::~Product(){}