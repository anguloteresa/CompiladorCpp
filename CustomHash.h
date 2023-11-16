// CustomHash.h

#pragma once

#include <tuple>
#include <string>

namespace std {
    template<>
    struct hash<std::tuple<std::string, std::string, std::string>> {
        std::size_t operator()(const std::tuple<std::string, std::string, std::string>& t) const {
            return std::hash<std::string>{}(std::get<0>(t)) ^
                   std::hash<std::string>{}(std::get<1>(t)) ^
                   std::hash<std::string>{}(std::get<2>(t));
        }
    };
}
