class book
{
public:
int date;
float price;
string name;
string author;

void display()
{
cout<<"enter the issused date of book:-\n";
cin>>date;

cout<<"enter the price of book:-\n";
cin>>price;

cout<<"enter the name of book:-\n";
cin>>name;

cout<<"enter the author of book:-\n";
cin>>author;
}
};

int main()
{
book b1;
b1.display();

return 0;
}

