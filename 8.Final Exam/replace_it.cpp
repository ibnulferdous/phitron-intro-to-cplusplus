#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int test_case;
    string s, x;
    cin>>test_case;


    for (int i = 1; i <= test_case; i++)
    {
        cin>>s>>x;

        int x_size = x.size();
        
        while (s.find(x) != string::npos)
        {
            int index = s.find(x);

            s.replace(index, x_size, "$");
        }

        cout<<s<<endl;
    }

    return 0;
}
