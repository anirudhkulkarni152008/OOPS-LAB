#include <iostream>
using namespace std;

class college
{
public:
    string name;
    float age;
    string contact;

    void show()
    {
        cout << "name of student :- " << name << endl
             << endl;
        cout << "age of student :- " << age << endl
             << endl;
        cout << "contact  of student :- " << contact << endl
             << endl;
    }
};

class student : public college
{
public:
    int rno;
    string branch;

    void disp()
    {
        cout << "roll no of student :- " << rno << endl
             << endl;
        cout << "branch of student :- " << branch << endl
             << endl;
    }
};

int main()
{
    student s1, s2;

    cout << "=====student frist detials======" << endl;

    s1.name = "ANIRUDH";
    s1.age = 18;
    s1.contact = "8497039683";
    s1.rno = 4;
    s1.branch = "SOAI";
    s1.show();
    s1.disp();

    cout << "+=====student frist detials======" << endl;

    s2.name = "parth";
    s2.age = 18;
    s2.contact = "8497039683";
    s2.rno = 35;
    s2.branch = "SOAI";
    s2.show();
    s2.disp();

    return 0;
}
