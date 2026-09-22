#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    string name;
    float salary;

    employee(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
        cout << "===CONTRUCTOR IS ACTIVATED!!===";
    }
    void disp()
    {
        cout << "id of employee :-" << id << endl;
        cout << "name of employee :-" << name << endl;
        cout << "salary of employee:-" << salary << endl;
    }

    ~employee()
    {
        cout << "DESTRUCTOR IS ACTIVATED!!" << endl;
    }
};
int main()
{
    employee e1(12, "ANIRUDH", 7000000);
    employee e2(13, "OM", 10000);
    employee e3(14, "sejal", 100000);
    e1.disp();
    e2.disp();
    e3.disp();

    return 0;
}
