#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;int sum=0,sum2=0,c=0;
    int b[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        sum+=0;
    }
    sum=sum/2;
    sort(b,b+n);
    for(int j=n-1;j>=0;j--)
    {
        sum2+=b[j];
        c++;
        if(sum<sum2)
        {
            break;
        }
    }
    cout<<c;

}