//
// Created by binhpht on 27.6.2019.
//

#ifndef RICE_H
#define RICE_H
#include "vector"
#include "IFood.h"
class Rice: public IFood {
public:
    void print_food(std::vector<std::pair<std::string, std::string>> &params)  ;
};
#endif //_RICE_H
