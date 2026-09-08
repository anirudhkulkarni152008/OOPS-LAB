#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int marks;
    int rno;

    student(string name, int marks, int rno)
    {
        this->name = name;
        this->marks = marks;
        this->rno = rno;
    }
    void disp()
    {
        cout << "NAME OF STUDENT:-" << name << endl;
        cout << "MARKS OF STUDENT:-" << marks << endl;
        cout << "ROLL NO OF STUDENT:-" << rno << endl;
    }
};

int main()
{
    student s1("ANIRUDH", 100, 04);
    s1.disp();
    student s2("OM", 100, 01);
    s2.disp();
    return 0;
}
