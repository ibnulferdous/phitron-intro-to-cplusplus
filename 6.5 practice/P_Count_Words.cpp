#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int count = 0;
    bool inside_word = false;
    string s;
    getline(cin, s);

    int length = s.size();

    
    for (char c:s)
    {
        if (isalpha(c))
        {   
            if (inside_word == false) 
            {
                count++;
                inside_word = true;
            }
        }
        else 
        {
            inside_word = false;
        }
    }
    

    cout<<count;

    return 0;
}