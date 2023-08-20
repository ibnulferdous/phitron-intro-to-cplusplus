#include <bits/stdc++.h>

using namespace std;

class Student
{
    public:
        string name;
        int cls;
        char section;
        int id;
};

int main(void)
{
    int n;
    cin>>n;

    Student arr[n];

    int start = 0;
    int end = n - 1;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].name>>arr[i].cls>>arr[i].section>>arr[i].id;
    }

    while (start < end)
    {
        swap(arr[start].id, arr[end].id);

        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].section<<" "<<arr[i].id;
        cout<<endl;
    }

    return 0;
}