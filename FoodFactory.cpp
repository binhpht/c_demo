#include "FoodFactory.h"

#include "Bread.h"
#include "Rice.h"

IFood *FoodFactory::creatingFood(const std::string &type) {
    if (type == "bread") {
        return new Bread;
    } else if (type == "rice") {
        return new Rice;
    }
}