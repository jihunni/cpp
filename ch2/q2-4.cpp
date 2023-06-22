// This program generates five random values [0,100)
#include <iostream>
#include <cstdlib>


int main(void){
    int count = 5;
    for (size_t i = 0; i < count; i++)
    {
        // Providing a seed value by using timestamp
        srand((unsigned) time(NULL));

        // Get a random number
        int random = rand();

        // Print the random number
        std::cout<<random<<std::endl;
    }
    
    return 0 ;
}