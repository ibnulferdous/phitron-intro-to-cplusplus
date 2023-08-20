#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int min_value = INT_MAX, max_value = INT_MIN;

    for (int i = 0; i < 3; i++)
    {   
        int value;
        cin>>value;

        if (min_value > value)
        {
            min_value = value;
        }

        if (max_value < value)
        {
            max_value = value;
        }
    }

    cout<<min_value<<" "<<max_value;



    return 0;
}