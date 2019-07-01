//
// Created by binhpht on 27.6.2019.
//

#ifndef BREAD_H
#define BREAD_H

#include "IFood.h"

class Bread : public IFood {
public:
    void print_food(std::vector<std::pair<std::string, std::string>> &params) override;
};

#endif //DEMO_BREAD_H
