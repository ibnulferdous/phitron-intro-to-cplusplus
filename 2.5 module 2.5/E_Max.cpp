#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin>>n;

    int z;

    int max_num = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin>>z;

        max_num = max(max_num, z); 
    }

    cout<<max_num;

    return 0;
}