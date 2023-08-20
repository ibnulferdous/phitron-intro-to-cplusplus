#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, flag = 0;
    cin>>t;

    for (int i = 1; i <= t; i++)
    {
        string ticket;
        cin>>ticket;

        int first_half = 0, second_half = 0;

        for (int j = 0; j < 6; j++)
        {
            int num = ticket[j] - 48;
            if (j < 3) 
            {
                first_half += num;
            }
            else 
            {
                second_half += num;
            }
        }

        if (flag == 1)
        {
            cout<<endl;
        }
        else
        {
            flag = 1;
        }

        first_half == second_half ? cout<<"YES" : cout<<"NO";

    }

    return 0;
}