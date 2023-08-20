#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int count = 0;
    string s, word;
    getline(cin, s);

    stringstream ss(s);

    while (ss >> word)
    {
        for (char c:word)
        {
            if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            {
                count++;
                break;
            }
        }
    }

    cout<<count;

    return 0;
}