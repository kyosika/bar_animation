#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
int main(){
    int jump;
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int total_bars = std::rand() % 125 + 1;
    int printed_bars = 0;
    while (printed_bars < total_bars) {
        
        jump = std::rand() % 12; 
        if(jump == 0){
            
            jump = 1;
        }
           for(int j = 0; j < jump; ++j){
        
        std::cout << "|" << std::flush;
    }
    
    printed_bars += jump;
    //random second part
    
    int rseconds = std::rand() % 2;//r = random
    int rmilli = std::rand() % 400 + 100; //100->499
    int milli = std::rand() % 400 + 100;
    auto rduration = std::chrono::seconds(rseconds) + std::chrono::milliseconds(rmilli) + std::chrono::milliseconds(milli);
    std::this_thread::sleep_for(rduration);
        
        
    }
    
    
 
    return 0;
}
