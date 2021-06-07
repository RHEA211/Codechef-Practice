#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,A,B;
    cin>>t;
    while(t--)
    {
        cin>>A>>B;
        if(A>B)
       {
           cout<<">"<<endl;
           }
       else if(A<B)
       {
           cout<<"<"<<endl;
       }
       else 
       {
            cout<<"="<<endl;
       }
    }
}