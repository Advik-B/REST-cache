//
// Created by Advik on 15-01-2024.
//

#include "cacher.h"

const char* getHelloWorld() {
    return "Hello World!";
}

nlohmann::json getJson() {
    nlohmann::json j;
    j["Hello"] = "World";
    j["Dump"] = j.dump(4);
    return j;
}
