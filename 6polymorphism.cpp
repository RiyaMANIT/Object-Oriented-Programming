// the most commmon use of polymorphism is when a 
//parent class reference is used to refer to a child class object

#include<bits/stdc++.h>
using namespace std;
//class is bluprint of object

class AbstractEmployee{ //Abstarct class
    //making this function obligatory (means neccesary)
    virtual void GetPromotion()=0;    
};

class Employee:AbstractEmployee{ //my class has signed contract name Abstracct class

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
    virtual void Work(){  //after making virtual it will execute latest fn
        cout<<Name<<" checking emails"<<endl;
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
    void Work(){
        cout<<Name<<" coding"<<endl;
    }  
};

class teacher :public Employee{
public:
    string Subject;
    teacher(string name, string company,int age,string subject)
        :Employee(name,company,age)
    {
        Subject=subject;
    }
    void Work(){
        cout<<Name<<" teching maths"<<endl;
    }  
};

int main(){

    Developer d=Developer("riya","deshaw",19,"c++");
    teacher t=teacher("jain","gs",19,"maths");
    //1. when we write work fn in only employee class
    d.Work();
    t.Work();  //output-> checking mails

    // 2. when we write work fn in inherted class teacher and developer
    d.Work();  
    t.Work();  //output-> coding,teaching
    
    //3. when we take pointers
    Employee *e1=&d;
    Employee *e2=&t;  // output-> checking emails
    e1->Work();
    e2->Work();  //  "->" this means access
   
   //4 when we make our work function virtual
    e1->Work();
    e2->Work();  //output-> coding,teaching 

}