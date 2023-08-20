#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, flag = 1;
    cin>>n;

    int arr[n];

    int start = 0;
    int end = n - 1;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            flag = 0;
            break;
        }

        start++;
        end--;
    }    

    flag == 1 ? cout<<"YES" : cout<<"NO";

    return 0;
}