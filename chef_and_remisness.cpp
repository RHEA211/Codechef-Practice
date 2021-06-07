#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,A,B;
    cin>>t;
    while(t--)
    {
        cin>>A>>B;
        cout<<max(A,B)<<" ";
        cout<<A+B<<endl;
    }
}