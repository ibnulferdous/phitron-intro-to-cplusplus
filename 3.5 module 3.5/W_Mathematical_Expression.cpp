#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c;
    char s, q;

    cin>>a>>s>>b>>q>>c;

    // For summation
    if (s == '+')
    {
        if (a + b == c)
        {
            cout<<"Yes";
        }
        else 
        {
            cout<<a + b;
        }
        
    }

    // For substraction
    if (s == '-')
    {
        if (a - b == c)
        {
            cout<<"Yes";
        }
        else 
        {
            cout<<a - b;
        }
        
    }
    
    // For substraction
    if (s == '*')
    {
        if (a * b == c)
        {
            cout<<"Yes";
        }
        else 
        {
            cout<<a * b;
        }
        
    }

    return 0;
}