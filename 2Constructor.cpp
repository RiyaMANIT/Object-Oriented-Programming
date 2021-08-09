// It is a special function always present in class
// Constructor is responsible to create an object
//when we create an object of class, constructor is invoked

//it gets automatically called and only once for a single object
// Employee E1;(in last code)  it will make a call to the constructor func present inside the class  which is invisible to us.



// Constructor name should be same as of class name
//Constructor should not return anything

#include<bits/stdc++.h>
using namespace std;
//class is bluprint of object
class Employee{
public:
    string Name;
    string Company;
    int Age;

    void Indroduction(){
        cout<<"Name:"<<Name<<endl;
        cout<<"Company:"<<Company<<endl;
        cout<<"Age:"<<Age<<endl;
    }
    
    Employee(){  //for E1,E2,E4
        cout<<"inside default constructor"<<endl;
    }
    
    Employee(string name, string company,int age){   //E3 is using this Constructor
        Name=name; 
        Company=company;
        Age=age;
    }

};

int main(){
   Employee E1,E2,E4;  //only these three will go in default constructor
   Employee E3("jain","company",20);
   E1.Name="riya";
   E1.Age=19;
   E1.Company="Deshaw";

   E1.Indroduction();
   E2.Indroduction();
   E3.Indroduction();

}