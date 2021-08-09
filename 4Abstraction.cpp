//Abstraction means hiding the complex thing behind a procedure that make those things looks simple
//Example-mobile(use is easy  but functionality that is hidden is complex)

#include<bits/stdc++.h>
using namespace std;
//class is bluprint of object

class AbstractEmployee{ //Abstarct class
    //making this function obligatory (means neccesary)
    virtual void GetPromotion()=0;
    
};


class Employee:AbstractEmployee{ //my class has signed contract name Abstracct class
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

    void GetPromotion(){
        if(Age>=30){
            cout<<"you are promoted"<<endl;
        }
        else{
            cout<<"not promoted"<<endl;
        }
    }
    
};

int main(){
   Employee E1("riya" ,"deshaw",19);
   E1.Indroduction();
   Employee E2("jain","gs",30);
   E2.Indroduction();

   E1.GetPromotion();
   E2.GetPromotion();

}