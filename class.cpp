#include<iostream>
using namespace std;

//class class_name
class student{
    public:
    string name,college,branch;
    int sem;

    void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"College:"<<college<<endl;
        cout<<"Branch:"<<branch<<endl;
        cout<<"Semister:"<<sem<<endl;
    }



};

int main(){
    student student1;
    student1.name="akshay";
    student1.college="CEC";
    student1.branch="AIML";
    student1.sem=8;
    student1.show();


    student student2;
    student2.name="akshay";
    student2.college="CEC";
    student2.branch="ise";
    student2.sem=7;
    student2.show();
}
