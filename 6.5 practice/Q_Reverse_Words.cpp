#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s, word, new_s;
    getline(cin, s);

    stringstream s_stream(s);

    while (s_stream >> word)
    {
        int length = word.size();
        int start_mark = 0;
        int end_mark = length - 1;

        while (start_mark < end_mark)
        {
            char temp = word[start_mark];
            word[start_mark] = word[end_mark];
            word[end_mark] = temp;

            start_mark++;
            end_mark--;
        }

        new_s += word;
        new_s += " ";
    }

    new_s.pop_back();
    cout<<new_s;

    return 0;
}