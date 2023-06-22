#include <iostream>

#define ACCOUNT_MEMORY_SPACE 50

using namespace std;

struct account{
    int ID;
    char name[20];
    int deposite;

};

struct account account_[ACCOUNT_MEMORY_SPACE];
int account_num=0;

int create(int ID, char* name, int deposite){
    account_[account_num].ID = ID;
    *account_[account_num].name = *name;
    account_[account_num].deposite = deposite;
    
    account_num += 1;
    
    return 0;
}

int withdraw(int ID, int money){
 
    //To search an account index
    int account_index=0;
    for (size_t i = 0; i < account_num; i++)
    {
        if (account_[i].ID == ID){
            account_index = i;
            break;
        }
    }
    
    account_[account_index].deposite -= money;
    
    return 0;
}

int print_all_info(void){
    for (size_t i = 0; i < account_num; i++)
    {
        cout<<"Account ID: "<<account_[i].ID<<"\n";
        cout<<"Account name: "<<account_[i].name<<"\n";
        cout<<"Account deposite: "<<account_[i].deposite<<"\n"<<endl;
    }
    
    return 0;
}

int main(void){
    int option=0;
    int end=1;
    int ID;
    char name[20];
    int deposite;

    while (end)
    {
        cout<<"----Menu----\n"<<"1.to open a bank account\n"
            <<"2. to make a deposite\n"
            <<"3. to withdraw from an accout\n"
            <<"4. to print all information\n"
            <<"5. to exit this program\nSelect the option: "<<endl;
        cin>>option;

        switch (option)
        {
        case 1:
            
            cout<<"New account ID : " ;
            cin>>ID;
            
            cout<<"New account user name : " ;
            cin>>*name;
            
            cout<<"Initial Deposit : " ;
            cin>>deposite;

            //TO-DO
            create(ID, name, deposite);
            
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            int money;

            cout<<"Account ID: ";
            cin>>option;
            
            cout<<"Withdraw amount: ";
            cin>>money;
            
            withdraw(ID, money);
            break;
        case 4:
            print_all_info();
            break;
        case 5:
            end = 0;
            break;
        default:
            cout << "Incorrect input." <<endl;
        }
        
    }
    

    

    return 0;
}