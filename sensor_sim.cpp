#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>

int main() {
    std::setvbuf(stdout, NULL, _IONBF, 0); // force no buffering
    std::srand(static_cast<unsigned>(std::time(0)));

    for (int i = 0; i < 10; ++i) {
        std::cout << "Distance: " << (std::rand() % 100) << " cm" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    return 0;
}
