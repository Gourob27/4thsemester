#include <bits/stdc++.h>
using namespace std;
int main()
{
vector<int>a1;
 int t;
 cin>>t;
for(int i=0;i<t;i++)
{
    int b;
    cin>>b;
    for(int i=0;i<b;i++)
    {
        int c;
        cin>>c;
        a1.push_back(c);
       
    }
sort(a1.begin(),a1.end());
for(int i=0;i<b;i++){
    cout<<a1[i];
}
}
}


