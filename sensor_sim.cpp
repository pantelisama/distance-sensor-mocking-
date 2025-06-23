#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    while (true) {
        int distance = 100 + std::rand() % 50;

        // Critical part: print with \n and flush right after
        std::cout << "Distance: " << distance << " cm\n";
        std::cout.flush();  // Force output to flush immediately

        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }

    return 0;
}
