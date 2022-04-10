//Encapsulation is bundling of data
//we need it to prevent other class to access our data directly

//Getters and setters

#include<bits/stdc++.h>
using namespace std;
//Class is bluprint of object
class Employee{

private: //these are inaccessible..so we need methods so that it will become accessible..getters and setters are those required functions
    string Name;
    string Company;
    int Age;

public:

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

    //setter
    void SetName(string name){
        Name=name;
    }
    string GetName(){ //getter
        return Name;
    }

    void SetAge(int age){ //setter
    //we can also set condition here
        if(Age>=18){
           Age=age;
        }
    }
    int GetAge(){  //getter
        return Age;
    }

};

int main(){
   Employee E1("riya" ,"deshaw",19);
   E1.Indroduction();
   Employee E2("jain","gs",20);
   E2.Indroduction();

   cout<<E1.GetName()<<E1.GetAge()<<endl;  //It will bydeafult take E1 values
   
   E1.SetName("Priyanshi");  E1.SetAge(19);
   cout<<E1.GetName()<<E1.GetAge();  //after  setting values we will get those values 

}
