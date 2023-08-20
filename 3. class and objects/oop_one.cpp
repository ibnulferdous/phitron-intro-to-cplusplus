#include <bits/stdc++.h>

using namespace std;

class Student
{
    public:
        char name[100];
        int cls;
        char section;
        int roll;
};

int main(void)
{   
    Student sagor;

    char s_name[100] = "SH Sagor";

    strcpy(sagor.name, s_name);
    sagor.cls = 9;
    sagor.section = 'A';
    sagor.roll = 10;

    Student rafi;

    char r_name[100] = "MA Rafi"; 

    strcpy(rafi.name, r_name);
    rafi.cls = 9;
    rafi.section = 'B';
    rafi.roll = 7;

    cout<<rafi.name<<endl;
    cout<<sagor.name<<endl;


    

    return 0;
}