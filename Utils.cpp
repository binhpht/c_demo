//
// Created by binhpht on 28.6.2019.
//

#include "Utils.h"
#include "iostream"
#include "map"
#include "string"
#include "vector"
#include "Parameter.h"
#include "BoolParameter.h"
//#include "StringParameter.h"
//#include "NumericParameter.h"

//http://www.stroustrup.com/bs_faq2.html#virtual-ctor
std::vector<Parameter> parameters = {
        BoolParameter("verbose")
//        StringParameter("backend", {"opencl", "cuda"}),
//        BoolParameter("profiling"),
//        NumericParameter("device_idx")
};

const Parameter &findParameter(std::vector<Parameter> pp, std::string name) {
    for (const auto &p: parameters) {
        if (p.name == name) {
            return p;
        }
    }
}

bool Utils::validation(const std::string &params, const std::string &value) {

    const Parameter &result = findParameter(parameters, params);//validation_map.find(params)->second;
    return result.parse(value);

}

void Utils::print_paramateres(std::vector<std::pair<std::string, std::string>> &params) {
    Utils utils;
    for (auto param : params) {
        utils.validation(param.first, param.second);
        std::cout << param.first << ": " << param.second << "\n";
    }
}


