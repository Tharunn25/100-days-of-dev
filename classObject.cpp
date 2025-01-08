#include <iostream>
#include <stdio.h>
using namespace std;

class Employee{
public:
    string Name;
    string Company;
    int Age;

    void introduceYourself(){
        cout<<"Hi My name is "<<Name<<" and i'm "<<Age<<" years old "<<" and I work at "<<Company<<endl;
    }
    
    // this is a constructor and it does not return any thing just like void, it's name should be same as the Class Name
    Employee(string name,string company,int age){
        Name = name;
        Company = company;
        Age = age;

    }
};

int main(){

    Employee employee1 = Employee("john","Amazon",23); // we are invoking the constructor here
    Employee employee2 = Employee("saldina","YT-CodeBeauty",25);
    employee1.introduceYourself();
    employee2.introduceYourself();
    
    return 0;
}