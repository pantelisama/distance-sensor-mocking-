#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    while (true) {
        int distance = 100 + std::rand() % 50;

        // Don't use std::endl (it adds newline + flush), use explicit flush
        std::cout << "Distance: " << distance << " cm\n";
        std::cout.flush();  // Force immediate output

        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }

    return 0;
}
