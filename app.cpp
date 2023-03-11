#include<iostream>
using namespace std;


int main(){


 string gender;
 
    while (gender!="M"|| gender!="m"|| gender!="f" || gender!="F")
{   cout<<endl;
    cout<< "what is your gender: ";
    cin >>gender;
  
     if (gender=="M"|| gender=="m")
    {
        cout<<"your are a man"<<endl;

     break;
    }
    else if(gender=="f" || gender=="F"){

       cout<<"your are a woman"<<endl;

    break;
    }else
    cout<<"\ninvalid gender";
    cout<<"\nplease enter a valid gender";
    
 
}






cin.get();
return 0;
}
