#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the size:";
    int n, s;
    cin >> n;
    vector<int> v;
    int val;
    for (int it = 0; it < n; it++)
    {
        cin >> val;
        v.push_back(val);
    }
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " "<<endl;
    }
    cout << "Search:";
    cin >> s;
    if (binary_search(v.begin(), v.end(), s))
        cout << s << " exists in vector";
    else
        cout << s << " does not exist";

    cout << endl;
}