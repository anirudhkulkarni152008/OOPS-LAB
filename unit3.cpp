#include <iostream>
using namespace std;

class employee
{
public:

int id;
string name;
int salary;
string depart;

void input()
{
cout<<"enter the id of employee:"<<endl;
cin>>id;
cin.ignore();
cout<<"enter the name of employee: "<<endl;
getline(cin,name);
cout<<"enter the salary of employee:"<<endl;
cin>>salary;
cout<<"enter the department of employee:"<<endl;
cin>>depart;
}

void disp()
{
cout<<"=========DETAILS OF EMPLOYEE======"<<endl;
cout<<"ID OF EMPLOYEE:"<<id<<endl;
cout<<"NAME OF EMPLOYEE:"<<name<<endl;
cout<<"SALARY OF EMPLOYEE:"<<salary<<endl;
cout<<"DEPARTMENT OF EMPLOYEE:"<<depart<<endl;

}
};

int main()
{
employee e1;
e1.input();
e1.disp();
return 0;
}
