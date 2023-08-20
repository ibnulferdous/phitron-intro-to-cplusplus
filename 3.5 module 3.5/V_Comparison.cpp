#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, equation_value = 0;
    char c;

    cin>>a>>c>>b;

    if (a < b) 
    {
        equation_value = 60;
    }
    else if (a > b)
    {
        equation_value = 62;
    }
    else
    {
        equation_value = 61;
    }

    if (c == equation_value)
    {
        cout<<"Right";
    }
    else
    {
        cout<<"Wrong";
    }

    return 0;
}