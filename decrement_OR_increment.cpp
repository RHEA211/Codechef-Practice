 //a program to obtain a number N and increment its value by 1 if the number is 
// divisible by 4 otherwiseotherwise decrement its value by 1.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
    
        cin>>n;
        if(n%4==0)
        {cout<<n+1;}
        else{
            cout<<n-1;
        }
    
}