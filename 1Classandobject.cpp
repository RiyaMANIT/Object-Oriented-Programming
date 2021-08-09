#include<bits/stdc++.h>
using namespace std;
//class is bluprint of object
class Employee{
public:
    string Name;
    string Company;
    int age;

    void Indroduction(){
        cout<<"Name:"<<Name<<endl;
        cout<<"Company:"<<Company<<endl;
        cout<<"age:"<<age<<endl;
    }

};

int main(){
   Employee E1;
   cout<<sizeof(E1)<<endl;
   cout<<sizeof(Employee)<<endl;
   // E1.Name="Riya";  //this can't be accesible because bydefault class is  in private access so we have to make class public first
   // after making class public
   E1.Name="riya";
   E1.age=19;
   E1.Company="Deshaw";

   E1.Indroduction();

   //we can also print our object employee:
   cout<<E1.Name<<" "<<E1.Company<<" "<<E1.age<<endl;

   // Let's take one more object
   Employee E2;
   E2.Name="Jain";
   E2.age=20;
   E2.Company="Goldman Sachs";
   E2.Indroduction();

   // If we want to insert 10 employees in it...then it will be lots of work...so we need contrctor for this
}