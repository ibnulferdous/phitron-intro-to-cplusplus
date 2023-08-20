#include <bits/stdc++.h>

using namespace std;

class Student 
{
    public:
        char name[100];
        int cls;
        char section;
        int roll;

        Student(char* std_nm, int std_cls, char std_sec, int std_roll)
        {
            strcpy(name, std_nm);
            cls= std_cls;
            section= std_sec;
            roll= std_roll;
        }

};

Student return_obj()
{
    char nm[100] = "Ibnul Ferdous";
    Student s_one(nm, 10, 'B', 23);

    return s_one;
}

int main(void)
{
    Student s_one = return_obj();

    cout<<s_one.cls;

    return 0;
}