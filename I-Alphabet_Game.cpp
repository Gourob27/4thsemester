#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();//size
    set<char> s1;
    for (int i = 0; i < n; i++)
    {
        s1.insert(s[i]);
    }
    cout << 26 - s1.size();
}