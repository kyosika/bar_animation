#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>
int main()
{
        srand(time(NULL));
auto seconds = std::rand() % 500;

    int counter = std::rand() % 125 + 1;
    for(int i = 0; i < counter; i++){
        
        std::cout << "|" << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(seconds));
    }

    return 0;
}
