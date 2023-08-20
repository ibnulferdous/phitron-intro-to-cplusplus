#include <bits/stdc++.h>

using namespace std;

int* get_array()
{
    int* arr = new int[3];

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    return arr;
}

int main(void)
{
    int* arr = get_array();
    cout<<arr[0];

    return 0;
}