#include <iostream>
#include <stdio.h>
using namespace std;

class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }

    string getcompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        Age = age;
    }

    int getAge()
    {
        return Age;
    }

    void introduceYourself()
    {
        cout << "Hi My name is " << Name << " and i'm " << Age << " years old " << " and I work at " << Company << endl;
    }

    // this is a constructor and it does not return any thing just like void, it's name should be same as the Class Name
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1 = Employee("john", "Amazon", 23); // we are invoking the constructor here
    Employee employee2 = Employee("saldina", "YT-CodeBeauty", 25);
    employee1.introduceYourself();
    employee2.introduceYourself();

    employee1.setAge(22);

    cout << employee1.getAge();

    return 0;
}