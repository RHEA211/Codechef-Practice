#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,f;
    cin>>t;
    for (int i=0;i<t;i++)
   { 
       cin>>n;

       int ld=n%10;
       while(n>0)
       {
           f=n;
            n=n/10;

       }
       int ans=ld+f;
       cout<<ans<<endl;
}
}