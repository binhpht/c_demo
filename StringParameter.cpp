//
// Created by binhpht on 30.6.2019.
//

#include "StringParameter.h"
StringParameter::StringParameter(std::string name, std::vector<std::string> allowed):Parameter(name) {
    this->allowedValues = allowed;
}

std::string StringParameter::help() {

}


