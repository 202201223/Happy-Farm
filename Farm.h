#ifndef FARM_H
#define FARM_H
#include "Person.h"
#include "Vet.h"
#include "Engineer.h"
#include "Worker.h"
#include "Field.h"
#include "Office.h"
#include "Animal.h"
#include "Sheep.h"
#include "Cow.h"
#include "Chicken.h"
#include "Plant.h"
#include "Corn.h"
#include "Rice.h"
#include "Wheat.h"
#include "Product.h"
#include "Milk.h"
#include "Egg.h"
#include "Wool.h"


#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Farm{
private:
    vector<Person*> people;
    int sqr_ft_land;
    int no_of_animal_houses;
    int animal_house_capacity;
    vector<Animal*> animals;
    vector<Plant*> plants;
    double capital;
public:
// Default Constructor
    Farm();

// Parameterized constructor
    Farm(int sqr_ft_land, int no_of_animal_houses, int animal_house_capacity);

 

};