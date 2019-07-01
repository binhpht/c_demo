//
// Created by binhpht on 30.6.2019.
//

#ifndef DEMO_STRINGPARAMETER_H
#define DEMO_STRINGPARAMETER_H

#include "Parameter.h"
#include "vector"

class StringParameter : public Parameter {
private:     std::vector<std::string> allowedValues;

public:

    StringParameter(std::string name, std::vector<std::string> allowed);

    bool parse(std::string input) = 0;

    std::string help() = 0;
};

#endif //DEMO_STRINGPARAMETER_H
