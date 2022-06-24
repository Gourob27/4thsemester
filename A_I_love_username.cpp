#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
 
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int count=0;
  for(int i=0;i<n;i++)
  {
    if(i==0) continue;
     bool ismax=true, ismin=true;
    for(int j=0;j<i;j++)
    {
      if(a[j]<=a[i]){
        ismin=false;
      }
      if(a[j]>=a[i])
      {
        ismax=false;
      }

    }
    if(ismax || ismin)
    {
        count++;
    }
  }
  cout<<count;
}