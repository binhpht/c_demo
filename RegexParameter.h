//
// Created by binhpht on 30.6.2019.
//

#ifndef DEMO_REGEXPARAMETER_H
#define DEMO_REGEXPARAMETER_H

#include "Parameter.h"

class RegexParameter : public Parameter {
    std::string regexRule;

    RegexParameter(std::string name, std::string regex);

    virtual bool parse(std::string input) = 0;

    std::string help() override = 0;

};


#endif //DEMO_REGEXPARAMETER_H
