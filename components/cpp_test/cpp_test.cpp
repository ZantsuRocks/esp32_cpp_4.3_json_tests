#include "cpp_test.hpp"

// void startCPPCode() {
//     new CppTest();
// }

void testTask() {
    using namespace std::chrono;
    int loopCount = 0;
    while (true) {
        cout << "Loop " << loopCount << " da Thread." << endl;
        this_thread::sleep_for(milliseconds(1000));
        loopCount++;
    }
}

CppTest::CppTest() {
    // printf("Construido\n");
    cout << "Construido" << endl;
    this->merda = 20;
    this->jsonData = {{"pi", 3.141}};
}
CppTest::~CppTest() {
    cout << "Morri com " << merda << " na variavel" << endl;
}
void CppTest::printHelloWorld() {
    // printf("Hello World\n");
    cout << "Hello World!" << endl;
    cout << "Merda = " << merda << endl;
    cout << jsonData.dump() << endl;
}
void CppTest::setMerda(int value) {
    this->merda = value;
}
void CppTest::runThread() {
    this->task = new thread(testTask);
}