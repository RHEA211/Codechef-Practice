#include<bits/stdc++.h> 
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for (int i=0;i<t;i++)
    {

        cin>>n;
    int sum=0;
      while(n>0)

       {
           
        sum=sum+n%10;
        n=n/10;
        
        }
        cout<<sum <<endl;
        
    }
    return 0;
}