//
// Created by binhpht on 27.6.2019.
//

#ifndef IFOOD_H
#define IFOOD_H
#include <string>
#include "vector"

class IFood {
public:
    virtual ~IFood() = 0;

    virtual void print_food(std::vector<std::pair<std::string, std::string>> &params) = 0;
};


#endif //DEMO_IFOOD_H
