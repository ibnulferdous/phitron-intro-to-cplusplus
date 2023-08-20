#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int m, n;

    cin>>m;
    int *arr_one= new int[m];

    for (int i = 0; i < m; i++)
    {
        cin>>arr_one[i];
    }

    cin>>n;
    int *arr_two = new int[n];

    for (int i = 0; i < n; i++)
    {   
        if (i < m) arr_two[i] = arr_one[i];
        else cin>>arr_two[i];
    }

    delete [] arr_one;

    for (int i = 0; i < n; i++)
    {   
        cout<<arr_two[i]<<" ";
    }

    return 0;
}

