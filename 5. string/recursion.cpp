#include <bits/stdc++.h>

using namespace std;

void print_recursively(stringstream &ss)
{
    string word;

    if (ss >> word)
    {
        print_recursively(ss);
        cout<<word<<endl;
    }
}

int main(void)
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    print_recursively(ss);


    return 0;
}