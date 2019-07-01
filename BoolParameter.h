//
// Created by binhpht on 30.6.2019.
//

#ifndef DEMO_BOOLPARAMETER_H
#define DEMO_BOOLPARAMETER_H

#include "Parameter.h"

class BoolParameter : public Parameter {
    using Parameter::Parameter;

    bool parse(std::string input) override = 0;

    std::string help() = 0;
};


#endif //DEMO_BOOLPARAMETER_H
