#include <iostream>
using namespace std;

class pricecheck
{
public:


    pricecheck()
    {
        cout <<"Enter The Name :";
        string name;
        cin >> name;
        cout << "\tWelcome To The String " << name;

    }

void subtraction(int a,int b)
{
    int c;
    c=a-b;
    cout <<"First Function OverLoad :" << c;
}

void subtraction1(float a,float b,float f)
{
    float c;
    c=a-b-f;
    cout <<"Second Function OverLoad :" <<c;
}

void subtraction2(float a,float b,float f,float e)
{
    float c;
    c=a-b-f-e;
    cout <<"Third Function OverLoad :" <<c;
}
void subtraction(string Name,string name)
{
    cout <<"Name\n" << Name+name;
}
};

int main()
{
    pricecheck pc;
    int v1,v2;
    cin >> v1 >> v2 ;
    pc.subtraction(v1,v2);
    float v3,v4,v5;
    cin >> v3 >> v4 >> v5;
    pc.subtraction1(v3,v4,v5);
    float v6,v7,v8,v9;
    cin >> v6 >> v7 >> v8 >> v9;
    pc.subtraction2(v6,v7,v8,v9);
    pc.subtraction("hari","haran");
    return 0;
}
