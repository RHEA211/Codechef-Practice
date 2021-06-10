#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,t,num;
   
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        num=n;
       
      int rev=0;
      while(num>0)
        { 
        int mod= num%10;
         
        rev=rev*10+mod;
        num=num/10;
       
        
        }

        if (rev==n)
        {
          cout<<"wins"<<endl;
          }
        
        else
        {cout<<"loses"<<endl;
        }
    }
return 0;
}