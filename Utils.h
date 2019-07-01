//
// Created by binhpht on 28.6.2019.
//

#ifndef DEMO_UTILS_H
#define DEMO_UTILS_H

#include "vector"
#include "string"
#include <regex>

class Utils {
public:
    static void print_paramateres(std::vector<std::pair<std::string, std::string>> &params);
    bool validation( const std::string &params,const std::string &value);

};


#endif //DEMO_UTILS_H
