#include<bits/stdc++.h>
using namespace std;

//Even weapons---win|| Odd weapons---- lose

int main()
{
    int t;
    cin>>t;
    int a[t];
    
    
        for (int i=0;i<t;i++)
    {
        cin>>a[i];

    }
    int odd=0,even=0;

    for(int j=0;j<t;j++)
    {
        

        if(a[j]%2==0)
       { 
           even++;
           }
       else
      { 
          odd++;
          }
    }

if(even>odd)
{
    cout<<"READY FOR BATTLE"<<endl;
    }
else
{
    cout<<"NOT READY"<<endl;
    }

    }
