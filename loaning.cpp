#include <iostream>
#include <fstream>
using namespace std;
class user
{
public:
    string name;
    int age;
    void setage(int age)
    {
        this->age = age;
    }
    void setname(string name)
    {
        this->name = name;
    }
    void entry()
    {
        ofstream my;
        my.open("C:\\Users\\ronak\\Desktop\\cp_code\\loan.csv");
        my << name << ',' << age << endl;
    }
    int check(){
        ifstream mo;
        mo.open("C:\\Users\\ronak\\Desktop\\cp_code\\loan.csv");
        while(mo.good()){
            string line;
            string daa;
            getline(mo,line,',');
            getline(mo,daa,',');
            cout<<line<<" "<<daa<<endl;
    

        }
    }
};

class bank
{
public:
    string bankname = "State Bank of India";
    int balance = 500000000;
};

int main()
{
    cout << "Press 1 for new loan/ 2 for repayment of old loan : " << endl;
    int temp;
    cin >> temp;

    if (temp == 1)
    {
        cout << "Please enter your name : " << endl;
        string naam;
        cin >> naam;
        cout << "Please enter your age : " << endl;
        int umra;
        cin >> umra;
        user User;
        User.setage(umra);
        User.setname(naam);
        bank Bank;

        cout << "Please enter the amount" << endl;
        int amount;
        cin >> amount;
        if (amount <= Bank.balance)
        {
            Bank.balance -= amount;
            cout << "loan of amount : " << amount << " approved" << endl;
            User.entry();
        }
      
    }
      else
        {  
             user User;
            cout<<"Please enter you name : "<<endl;
            string na;
            cin>>na;
            int age;
            cout<<"please enter you age : "<<endl;
            cin>>age;
            User.setage(age);
            User.setname(na);
            User.check();
            cout<<"Enter the amount you want to repay :"<<endl;
            int pay;
            cin>>pay;
            cout<<"Thank you"<<endl;
            User.entry();
           
  

        }
    return 0;
}