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

int main(void)
{
    char r_name[100] = "MA Rafi";
    Student* rafi = new Student(r_name, 9, 'A', 7);

    char m_name[100] = "Sudipta Moitry";
    Student* moitry = new Student(m_name, 12, 'B', 3);

    cout<<rafi->name<<endl;
    cout<<moitry->name<<endl;

    delete moitry;

    cout<<(*rafi).cls<<endl;
    cout<<(*rafi).section<<endl;

    return 0;
}