#include <iostream>
#include <chrono>
#include <thread>
int main()
{
    for(int i = 0; i <= 120; i++){

        std::cout << "|" << std::flush;
                std::this_thread::sleep_for(std::chrono::milliseconds(560));
        
    }

    return 0;
}
