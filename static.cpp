#include <iostream>
using namespace std;

class student
{
public:
    int rno;
    string name;
    float marks;
    static string clg_name;

    student(int r, string n, float m)
    {
        rno = r;
        name = n;
        marks = m;
    }
    void disp()
    {
        cout << "ROLL NO OF STUDENT IS :-" << rno << endl;
        cout << "NAME OF STUDENT IS :-" << name << endl;
        cout << "MARKS OF STUDENT IS :-" << marks << endl;
        cout << "NAME OF CLG :-" << clg_name << endl;
    }
};
string student::clg_name = "MIT ADT";
int main()

{
    student s1(1, "ANIRUDH", 100);
    student s2(2, "om", 100);
    student s3(3, "parth", 100);
    student s4(4, "virat", 100);
    student s5(5, "prjaval", 100);
    student s6(6, "harshal", 100);
    s1.disp();
    s2.disp();
    s3.disp();
    s4.disp();
    s5.disp();
    s6.disp();
    return 0;
}
