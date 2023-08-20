#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, line_break = 0;
    cin>>t;

    for (int x = 1; x <= t; x++)
    {
        int s_len, count = 0;
        string s;
        cin>>s_len;
        cin>>s;

        int arr[26] = {0};

        for (char c:s)
        {
            int value = c - 65;

            if(arr[value] == 0) 
            {
                arr[value]++;
                count += 2;
            }
            else 
            {   
                arr[value]++;
                count++;
            }
        }

        if (line_break == 0)
        {
            line_break = 1;
        }
        else 
        {
            cout<<endl;
        }

        cout<<count;
    }

    return 0;
}