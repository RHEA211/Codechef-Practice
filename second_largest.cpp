#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,A,B,C;
    cin>>t;
    while(t--)
    {
        cin>>A>>B>>C;
        if(A<B && A>C || A>B && A<C){
            cout<<A<<endl;
        }

        else if(B>A && B<C || B>C && B<A){
            cout<<B<<endl;
        }

        else 
        {
            cout<<C<<endl;
        }       
    }

}
