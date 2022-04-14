#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    int sum=0;int k=0;
    for(int i=0;i<n;i++)
    {
       cin>>a>>b;
       sum=(a+k)-b;
       if(sum<0)
       k=0;
       else
       k=sum;
    }
    cout<<sum;
}