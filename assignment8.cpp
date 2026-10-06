#include <iostream>
using namespace std;
class person
{
public:
    int ear;
    int finger;

    void show()
    {

        cout << "nos of ears:- " << ear << endl
             << endl;
        cout << "nos of finger:- " << finger << endl
             << endl;
    }
};

class employee : public person
{
public:
    string name;

    void disp()
    {
        cout << "name of employee :- " << name << endl
             << endl;
    }
};

class manager : public employee
{
public:
    string post;

    void get()
    {
        cout << "post  of manager :- " << post << endl
             << endl;
    }
};

int main()
{
    manager m1;
    m1.ear = 2;
    m1.finger = 10;
    m1.name = "ANIRUDHA";
    m1.post = "marketing manager";

    m1.show();
    m1.disp();
    m1.get();
}
