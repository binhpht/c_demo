//
// Created by binhpht on 30.6.2019.
//

#include "RegexParameter.h"

RegexParameter::RegexParameter(std::string name, std::string regex): Parameter(name) {
   this->regexRule = regex;
}
bool RegexParameter::parse(std::string input)  {
    return true;

}

std::string RegexParameter::help() {
    return regexRule;
}