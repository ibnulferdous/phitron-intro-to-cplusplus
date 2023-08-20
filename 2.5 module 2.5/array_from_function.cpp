#include <bits/stdc++.h>

using namespace std;

int *get_array(int size);

int main(void)
{
    int n;
    cin>>n;

    int *arr = get_array(n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }

    return 0;
}

int *get_array(int size)
{
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    return arr;
}