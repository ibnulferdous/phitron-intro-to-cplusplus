#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;
    cin>>s;

    int s_len = s.size();

    for (int i = 0; i < s_len; i++)
    {
        if (s[i] == 'E' && s[i + 1] == 'G' && s[i + 2] == 'Y' && s[i + 3] == 'P' && s[i + 4] == 'T')
        {
            s.replace(i, 5, " ");
        }
    }

    cout<<s;

    return 0;
}