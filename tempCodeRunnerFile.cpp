#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char arr[1000];int n,i,j;
    int count=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {

            if(arr[i] == arr[j])
            {
                count++;


            }
        }
    }
if(arr[i] == arr[j])
            {
               cout<< count++;
            }
            else
            {
                cout<<1;
            }

}
