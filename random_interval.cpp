#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>
int main()
{
        srand(time(NULL));
            int counter = std::rand() % 125 + 1;
        for(int i = 0;i < counter; i++){
auto seconds = std::rand() % 3 + 1;
int between = std::rand() % 10 + 1;
int milli = std::rand() % 400 + 1 + 100;
auto sleep_duration = std::chrono::milliseconds(milli);


  
        
        std::cout << "|" << std::flush;
        std::this_thread::sleep_for(sleep_duration);
        }

    return 0;
}
