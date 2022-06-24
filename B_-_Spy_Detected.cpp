#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
void solve() {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
      cin>>a[i];

   }
   if(a[0]!=a[1] && a[1]==a[2])
   {
      cout<<1<<endl;
   }
   else{
      int x=a[0];
      for(int i=0;i<n;i++)
      {
         if(a[i]!=x)
         {
            cout<<i+1<<endl;
            break;
         }
      }
   }

}
 
int main() {
int T;
cin >> T;
while(T--) {
solve();
}
return 0;
}