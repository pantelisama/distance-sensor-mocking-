#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

int main() {
    std::ios::sync_with_stdio(true);  // use C-style flushing

    std::srand(static_cast<unsigned>(std::time(nullptr)));

    while (true) {
        int distance = 100 + std::rand() % 50;

        // Flush with \n and force stdio to flush
        std::printf("Distance: %d cm\n", distance);
        std::fflush(stdout);  // force flush now

        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }

    return 0;
}
