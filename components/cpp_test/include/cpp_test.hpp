// #ifndef INCLUDE_CPP_TEST_HPP_
// #define INCLUDE_CPP_TEST_HPP_

#pragma once

#include "cpp_json.hpp"
#include <chrono>
#include <iostream>
#include <string>
#include <thread>

using namespace std;
using namespace nlohmann;

class CppTest {
private:
    int merda;
    thread *task;
    json jsonData;

public:
    CppTest();
    ~CppTest();
    void printHelloWorld();
    void setMerda(int value);
    void runThread();
    void setKeyString(string key, string value);
};

// #endif