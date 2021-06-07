#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,count;
    cin>>t;
   

    while(t--)
    {
     cin>>n;
     count=0;

     while(n>0)
     {
        if(n%10==4)
        {
            count++;
        }
        n=n/10;
     }
     cout<<count<<endl;

    }
}