#include <iostream>
using namespace std;

class Calculator{
    private:
        int count;
    public:
        void init();
        void ShowOpCount();
        float Add(float x, float y);
        float Min(float x, float y);
        float Div(float x, float y);
};

void Calculator::init(){
    count = 0;
    return ;
}

void Calculator::ShowOpCount(){
    cout<<count<<endl;
}

float Calculator::Add(float x, float y){
    count ++ ;
    return x+y;
}


float Calculator::Min(float x, float y){
    count ++;
    return x-y;
}

float Calculator::Div(float x, float y){
    count ++;
    return x / y ;
}

int main(void){

    Calculator cal;
    cal.init();

    cout<<"3.2 + 2.4 \t"<<cal.Add(3.2, 2.4)<<endl;
    cout<<"3.2 / 2.4 \t"<<cal.Min(3.2, 2.4)<<endl;
    cout<<"3.2 - 2.4 \t"<<cal.Div(3.2, 2.4)<<endl;
    
    cal.ShowOpCount();

    return 0;
}