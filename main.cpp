#include <iostream>
#include "IFood.h"
#include "FoodFactory.h"
#include<string.h>
#include "vector"

std::vector<std::pair<std::string, std::string>> v_paramaters =
        {
                {"verbose",    "false"},
                {"backend",    "OpenCV"},
                {"proficing",  "1"},
                {"device_idx", "1234567"}
        };


int main() {
    FoodFactory *foodFactory = new FoodFactory;
    IFood *food;
    food = foodFactory->creatingFood("bread");
    food->print_food(v_paramaters);


    return 0;
}