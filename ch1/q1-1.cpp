#include <iostream>
using namespace std;
int main(void){
    int input=0;
    int sum=0;

    std::cout<<"Write down the number : ";
    std::cin>>input;
    sum += input;
    std::cout<<"Current summation: "<<sum<<"\n";
    std::cout<<"End"<<std::endl;


    return 0;
}