// to practice a constant pointer and reference
#include <iostream>

int main(void){
    
    const int num=12;
    const int* ptr = &num;
    const int &num_ref = num;

    std::cout<<*ptr<<"\n"<<num_ref<<std::endl;

    return 0;
}