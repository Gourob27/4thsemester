#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,i;int count=0;
    cin>>s;
  int b[1000];
    for(i=0;i<s;i++)
    {
        cin>>b[i];
        if(b[i]==1)
        {
            count++;
        }
    }
    
         if(count==0)
         {
          cout<<"EASY";
         }
         else
         {
             cout<<"HARD";
         }
     }
 
    
    

