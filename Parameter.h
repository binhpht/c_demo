//
// Created by binhpht on 30.6.2019.
//

#ifndef DEMO_PARAMETER_H
#define DEMO_PARAMETER_H

#include "string"

class  Parameter {
public:
    std::string name;

    Parameter(std::string name);

    virtual bool parse(std::string input) = 0;

    virtual std::string help() = 0;
};
#endif //DEMO_PARAMETER_H
