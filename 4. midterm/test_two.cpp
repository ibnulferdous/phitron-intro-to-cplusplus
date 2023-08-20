#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int* arr = new int[5];

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}