//Check prime number
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,t,i;
    cin>>t;
    while (t--)
    {cin>>num;
        bool flag=0;
    
    
    for(i=2;i<num;i++)

     {  
        if(num%i==0)
        {cout<<"no"<<endl;
        flag=1;
        break;}
     }

        if(flag==0)
       { cout<<"yes"<<endl;}}
    }


