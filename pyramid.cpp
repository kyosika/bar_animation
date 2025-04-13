#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
int main(){
    srand(time(NULL));
      for(int i = 1; i <= 100; i++){
    int sec = std::rand() % 5;
    if(sec == 0){
        
        sec = 1;
    }
    auto percent_time = std::chrono::seconds(sec);
  
        std::cout << " " << i << "%" << std::endl << std::flush;
          std::this_thread::sleep_for(percent_time);
        
             for(int j = 1; j <= i; j++){
                 
                 std::cout << "|" << std::flush;
                 std::this_thread::sleep_for(std::chrono::milliseconds(50));
             }
      
        
     
  
        
    }
    return 0;
}/*#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
int main(){
    srand(time(NULL));
      for(int i = 1; i <= 100; i++){
    int sec = std::rand() % 5;
    if(sec == 0){
        
        sec = 1;
    }
    auto percent_time = std::chrono::seconds(sec);
  
        std::cout << " " << i << "%" << std::endl << std::flush;
          std::this_thread::sleep_for(percent_time);
        
             for(int j = 1; j <= i; j++){
                 
                 std::cout << "|" << std::flush;
                 std::this_thread::sleep_for(std::chrono::milliseconds(50));
             }
      
        
     
  
        
    }
    return 0;
}*/
