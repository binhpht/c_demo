//
// Created by binhpht on 27.6.2019.
//

#ifndef FOODFACTORY_H
#define FOODFACTORY_H

#include <string>

#include "IFood.h"

class FoodFactory {
public:
    IFood *creatingFood(const std::string &type);

};

#endif // FOODFACTORY_H
