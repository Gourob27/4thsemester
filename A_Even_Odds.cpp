
#include<iostream>
using namespace std;
int main()
{
    long long int x,y,z;
    cin>>x>>y;
    if(x%2==0)
    {
        z=x/2;
    }
    else{
        z=(x+1)/2;
    }
    if(y<=z)
    {
        cout<<(y*2)-1;
    }
    else{
        cout<<(y-z)*2;
    }
}