#include <bits/stdc++.h>

using namespace std;

class Student
{
    public:
        char name[100];
        int cls;
        char section;
        int roll;

    Student(char n[100], int c, char s, int r)
    {
        strcpy(name, n);
        cls = c;
        section = s;
        roll = r;
    }
};

Student create_obj(char n[100], int c, char s, int r)
{
    char name[100];
    strcpy(name, n);
    Student obj(name, c, s, r);

    return obj;
}

int main(void)
{
    char r_name[100] = "MA Rafi";
    Student rafi = create_obj(r_name, 10, 'A', 35);

    char s_name[100] = "SH Shagor";
    Student shagor = create_obj(s_name, 9, 'C', 21);

    cout<<rafi.name<<endl;
    cout<<rafi.cls<<endl;
    cout<<rafi.roll<<endl;

    cout<<shagor.name<<endl;
    cout<<shagor.cls<<endl;
    cout<<shagor.roll<<endl;


    return 0;
}