


///vector///
/*cout<<"Enter the size:";
int n,sum=0;
cin>>n;
vector<int>v;
int val;
for(int it=0;it<n;it++)
{
    cin>>val;
    v.push_back(val);
}
vector<int>::iterator it;
for(it=v.begin();it!=v.end();it++)
{
    cout<<*it<<"";
}
sort(v.rbegin(),v.rend());
cout<<endl;
for(int it=0;it<n;it++)
{
    cout<<v[it];
}*/
////set//
#include<bits/stdc++.h>
using namespace std;
int main()
{
///set///
set<char>s;
s.insert('T');
s.insert('A');
s.insert('N');
s.insert('V');
s.insert('I');
s.insert('R');
set<char>::iterator it;
 for(it=s.begin();it!=s.end();it++)
 {

 cout<<"   "<<*it;
 }
 cout<<endl;
 cout<<s.size();

}
