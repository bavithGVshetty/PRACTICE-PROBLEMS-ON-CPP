// ENCAPSULATION
// Binding of data and functions in a single unit
// Private
// 1.connot access outside the class
// 2.Connot access in the derived class
// Protected
// Getters and setters

// Protected
// 1.Can be access in the derived class
// BANK MINI PROJECT
#include<iostream>
using namespace std;
class BankAccount{
    private:
        string accountHolder;
        double balance;
        int accountNumber;
        int pin=5757;
    protected:
        double interestRate;
    
    public:
        BankAccount(string name,int accNo,double bal){
            accountHolder=name;
            accountNumber=accNo;
            balance=bal;
            interestRate=1.0;
        }
    void setName(string name){
        accountHolder=name;
    }

    void deposit(double amount){
        if(amount>0){
            balance=balance+amount;
            cout<<"Deposited: "<<amount<<"New Balance: "<<balance<<endl;
        }
        else if(amount>20000){
            cout<<"This value cross our deposit limit please try less value then entered\n";
        }
        else{
            cout<<"Invalid amount entered!\n";
        }
    }
    void withdraw(double amount){
        if(amount>0&&amount<=balance){
            balance=balance-amount;
            cout<<"Withdrawn: "<<amount<<"| The remaining balance: "<<balance<<endl;
        }
    }
    void getBalance(){
        int pin;
        int max=3;
        while(1){
            cout<<"Enter the pin\n";
            cin>>pin;
        if(this->pin==pin)
        {
            cout<<"Account Balance"<<balance<<endl;
            return;
        
        }
        else{
            printf("INVALID PIN\n");
            max--;
            printf("You have MAX %d Attemps left",max);
            if(max==0){
                printf("\nTry after 48hours\n");
                  return;
            }
          

        }

    }}
    string getAccountHolder(){
        return  accountHolder;
    }

};

int main(){
    BankAccount b1("BAVITH",123,100);
    b1.deposit(100);
    b1.withdraw(20);
    printf("NEXT LINE\n");
    printf("Enter the pin\n");
            
    b1.getBalance();
}