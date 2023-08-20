#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    string s, word;
    int flag = 0;

    getline(cin, s);

    stringstream s_stream(s);

    while(s_stream >> word)
    {
        if (word == "Ratul")
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
