#include <iostream>

using namespace std;

class subjectcheck
{

public:

    subjectcheck()
    {
        cout << "\n welcome the subject = ";
    }
    subjectcheck(string tamil)
    {
        cout << "\n welcome the = " <<  tamil;
    }
    subjectcheck(string tamil,string english)
    {
        cout << "\n welcome the = " <<  tamil+english;
    }
    subjectcheck(string tamil,string english,string maths)
    {
        cout << "\n welcome the = " << tamil+english+maths;
    }
    subjectcheck(string tamil,string english,string maths,string science)
    {
        cout << "\n welcome the = " <<  tamil+english+maths+science;
    }
    subjectcheck(string tamil,string english,string maths,string science,string socialscience)
    {
        cout << "\n welcome the = " <<  tamil,english,maths,science,socialscience;

    }
    };
   int main()
   {
    subjectcheck sk;
    cout << "Enter the subjectname";
    string s_name;
    cin >> s_name;
    subjectcheck sk1(s_name);
    cout << "Enter the subjectname";
    string s_name1;
    cin >> s_name1;
    subjectcheck sk2(s_name,s_name1);
    cout << "Enter the subjectname";
    string s_name2;
    cin >> s_name2;
    subjectcheck sk3(s_name,s_name1,s_name2);
    cout << "Enter the subjectname";
    string s_name3;
    cin >> s_name3;
    subjectcheck sk4(s_name,s_name1,s_name2,s_name3);
    cout << "Enter the subjectname";
    string s_name4;
    cin >> s_name4;
    subjectcheck sk5(s_name,s_name1,s_name2,s_name3,s_name4);
    cout << "Enter the subjectname";
    string s_name5;
    cin >> s_name5;

return 0;
   }
