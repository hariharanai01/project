#include <iostream>
using namespace std;

class totalvalue
{
public:
    int x=0;
void multiplay()
{   int a,b,c;
    cout <<"Enter The A Value\n";
    cin >> a;
    cout <<"Enter The B Value\n";
    cin >> b;
    cout <<"Addition";
    cout <<"The C Value\n"<<(a+b);
    cout <<"Subtraction";
    cout <<"The C Value\n"<<(a-b);
    cout <<"Multiplication";
    cout <<"The C Value\n"<<(a*b);
}
    int Division ();
};

int totalvalue::Division()
{
    int d,e,f;
    cout <<"Enter The A Value\n";
    cin >> d;
    cout <<"Enter The B Value\n";
    cin >> e;
    cout <<"Division";
    cout <<"The F Value\n"<<(d/e);
    cout <<"Modulus";
    cout <<"The F Value\n"<<(d%e);
}

int main()
{
    totalvalue tv;
    cout << tv.x;
    tv.multiplay();
    tv.Division();
    return 0;
}
