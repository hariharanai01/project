#include<iostream>
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
    cout <<"Addition\n";
    c=a+b;
    cout <<"The C Value\n"<<c;
    cout <<"Subtraction\n";
    c=a-b;
    cout <<"The C Value\n"<<c;
    cout <<"Multiplication\n";
    c=a*b;
    cout <<"The C Value\n"<<c;
}
    int Division ();
    int Modulus();
    int Increment();
    int Decrement();
};

int totalvalue :: Division()
{
    int d,e,f;
    cout <<"Enter The D Value\n";
    cin >> d;
    cout <<"Enter The E Value\n";
    cin >> e;
    cout <<"Division\n";
    cout <<"The F Value\n"<<(d/e);
}

int totalvalue::Modulus(){
    int d,e,f;
    cout <<"Modulus\n";
    cout <<"The F Value\n"<<(d%e);
}

int totalvalue::Increment()
{
    int d;
    cout <<"Increment\n";
    cout <<"The F Value\n"<<(++d);
}
int totalvalue::Decrement()
{
    int e;
    cout <<"Decrement\n";
    cout <<"The F Value\n"<<(--e);
}
int main()
{
    totalvalue tv;
    cout << tv.x;
    tv.multiplay();
    tv.Division();
    tv.Modulus();
    tv.Increment();
    tv.Decrement();
    return 0;
}
