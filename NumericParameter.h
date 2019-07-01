//
// Created by binhpht on 30.6.2019.
//

#ifndef DEMO_NUMERICPARAMETER_H
#define DEMO_NUMERICPARAMETER_H

#include "RegexParameter.h"

class NumericParameter : public RegexParameter {
public:
    NumericParameter(std::string name);


    std::string help() = 0;
};
#endif //DEMO_NUMERICPARAMETER_H
