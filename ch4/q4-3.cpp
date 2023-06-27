#include <iostream>
using namespace std;

enum comp_pos {clerk, senior, assist, manager};

class NameCard{
    private:
        const char * name;
        const char * companyName;
        const char * contactInfo;
        const int companyPosition;
    public:
        NameCard(char* name, char* companyName, char* contactInfo, int companyPosition)
            : name(name), companyName(companyName), contactInfo(contactInfo), companyPosition(companyPosition)
        {
        }
        void showNameCardInfo() const {
            cout<<"name: "<<name<<"\n"
            <<"companyName: "<<companyName<<"\n"
            <<"contactInfo: "<<contactInfo<<"\n"
            <<"companyPosition: "<<companyPosition<<"\n"
            <<endl;
        }
};

int main(void){
    //cout<<"print"<<endl;
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", comp_pos::clerk);
    manClerk.showNameCardInfo();
    return 0;
}