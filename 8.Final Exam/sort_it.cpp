#include <bits/stdc++.h>

using namespace std;

class Student
{
    public:
        string name;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
};

bool cmp(Student a, Student b)
{   
    int a_total = a.math_marks + a.eng_marks;
    int b_total = b.math_marks + b.eng_marks;

    if (a_total > b_total) 
    {
        return true;
    }
    else if (a_total == b_total)
    {
        if (a.id < b.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    // Write your code here
    int n;
    cin>>n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].name>>arr[i].cls>>arr[i].s>>arr[i].id>>arr[i].math_marks>>arr[i].eng_marks;
    }

    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].s<<" "<<arr[i].id<<" "<<arr[i].math_marks<<" "<<arr[i].eng_marks;
        cout<<endl;
    }

    return 0;
}
