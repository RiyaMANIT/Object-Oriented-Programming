// Parent class/base class
//Derived class/child class/Inherit class

// If a class is inherit to base class then it means that inherit/derived class has all attributes and behaviour of base class
//but base class need not have all properties of inherit class 

//example : car(base class)  Properties like name,modelno,seats,break etc
         // Electric car, gas car(derived class) these will have all properties of car 
         // but car don't have all properties of electric car like power connection or gas car like gas tank.


#include<bits/stdc++.h>
using namespace std;
//class is bluprint of object



class Employee{
protected: //If we make this protected then Name,company,Age can be accesible in inherit class
    string Name;
    string Company;
    int Age;
public:
    void Indroduction(){
        cout<<"Name:"<<Name<<endl;
        cout<<"Company:"<<Company<<endl;
        cout<<"Age:"<<Age<<endl;
    }
    
    Employee(string name, string company,int age){   
        Name=name; 
        Company=company;
        Age=age;
    }

    void GetPromotion(){
        if(Age>=30)
            cout<<"you are promoted"<<endl;
        
        else
            cout<<"not promoted"<<endl; 
    }   
};

class Developer:public Employee{ //this inheritclass is private by default..so to access all fn of baseclass in main fn,we made it pub
public:
    string Language;
    //we made this constructor bcz we have lost the default one and it is lost in base class
    Developer(string name, string company,int age,string language)
        :Employee(name,company,age) 
    {
        Language=language;
    }
    void FixBug(){
        cout<<Name<<" fixed the bug"<<endl;
    }

};

int main(){

    Developer d=Developer("riya","deshaw",19,"c++");
    d.Indroduction();
    d.FixBug();
    d.GetPromotion();

}