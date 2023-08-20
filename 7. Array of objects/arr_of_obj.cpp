#include <bits/stdc++.h>

using namespace std;

class Student {
    public:
        string name;
        int cls;
        int roll;
};

int main(void)
{
    Student arr[3];

    for (int i = 0; i < 3; i++)
    {
        getline(cin, arr[i].name);
        cin>>arr[i].cls;
        cin>>arr[i].roll;
        cin.ignore();
        // getchar();
    }

    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].roll<<endl;
        // cout<<arr[i].name<<endl;
    }

    return 0;
}