#include<iostream>
using namespace std;

void isDeposits ();

void isWithdrawal ();

void isMenu ();
 
 int main(){
 string password ="1234";
 string enterPassword;
 cout << "Enter screate pin: ";
 cin>>enterPassword;
 // Main block.
if(enterPassword == password){  
isMenu();
}
else{

for(int i=3;i>=2; i--){
    cout << "Invalid password. Please try again." << endl;
    cout << "Enter secret pin: ";
    cin >> enterPassword;
    if (enterPassword==password)
    {
        isMenu();
        break;
    }
    else if(i==2){
    cout << "Your account has been blocked" << endl;


    }
    





}



}

    return 0;
 }


//withdrawal system
void isWithdrawal(){
    int op;float initAmount=10000000.00,amountWithdraw;string  account;
    cout << "*----MAin MENU----*"<<endl;
    cout << "1.Withdrawal Money" <<endl;
    cout << "2.Transfer money to another account" <<endl;
    cout <<"Enter your option: ";
    cin >> op;

    switch (op)
    {
    case 1:
        cout  << "Enter Amount To Withdraw: ";cin>>amountWithdraw;
        cout << "\nYour Have Withdraw: " <<amountWithdraw;
        cout << "\nYour  New Balance is  "<< initAmount - amountWithdraw<<endl;
        break;
    case 2:
        cout  << "Enter Account To Transfer Money To: ";cin>>account;
        cout  << "Enter Amount To Transfer: ";cin>>amountWithdraw;
        cout << "\nYour Have Transferred: "<<amountWithdraw <<"USD TO "<<account;
        cout << "\nYour  New Balance is  "<< initAmount - amountWithdraw<<endl;



    break;
    default:
        break;
    }
}

// Deposits system
void isDeposits(){
float initAmount=10000000.00,addedAmount;  
int choice;
cout << "*----MAin MENU----*"<<endl;
cout << "1.Check Balance " <<endl;
cout << "2.Enter Amount To Deposit " <<endl;
cout <<"Enter your option: ";
cin >> choice;
switch (choice)
{
case 1 :
cout << "Have "<< initAmount << "USD in your account"<<endl;;
 break;
case 2 :
cout  << "Enter Amount To Deposit: ";cin>>addedAmount;
cout << "\nYour  New Balance is  "<< initAmount + addedAmount<<endl;

default:
    break;
}


}

// Menu system
void isMenu(){
int op;
cout << "*----MAin MENU----*"<<endl;
cout << "1.Deposit" <<endl;
cout << "2.Withdrawal" <<endl;
cout <<"Enter your option: ";
cin >> op;
switch (op)
{
case 1 :
isDeposits();

 break;
    
case 2 :
isWithdrawal();
break;

default:
    break;
}




}







