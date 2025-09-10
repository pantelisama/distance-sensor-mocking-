#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>  // for sleep
#include <chrono>
// bitbucket_ validation
int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    while (true) {
        int distance = 100 + std::rand() % 50;
        std::cout << "Distance: " << distance << " cm" << std::endl;

        // Sleep for ~300ms between readings
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }

    return 0;
}
