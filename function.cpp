#include<iostream>
using namespace std;

void sayHello(){
    cout<<"Hello "<<endl;

}
int sayHi(string name){  //function wth parameters 
    cout<<"Hi,"<<name<<endl;
    return 0;
}


int greet(string fname,string lname,int age){  //function wth parameters 
    cout<<"Hi,"<<fname<< " "<< lname <<",Age:"<<age <<endl;
    return 0;
}



int main(){
    string firstName ,lastname ,friendName ;
    int Age;
    cout<<"enter your first name :";
    cin>>firstName;
    cout<<"enter your lastname :";
    cin>>lastname;
    cout<<"enter your age :";
    cin>>Age;
    cout<<"enter your friend name:";
    cin>>friendName;
    sayHello();
    sayHi(firstName);//function call with arguments
    sayHi(friendName);
    greet(firstName,lastname,Age);
    return 0;
}