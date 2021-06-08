#include<bits/stdc++.h>
using namespace std;

//Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
//If the sum of Rs. N is input, write a program to computer smallest number of notes that will combine to give Rs. N.




int main()

{
    int t,n,a;
    cin>>t;
    while(t--)
    {
        cin>>n;

        a=n/100;
        n=n%100;

        a += n/50;
        n=n%50;

        a += n/10;
        n=n%10;

        a += n/5;
        n=n%5;

        a += n/2;
        n=n%2;

        a += n/1;
     
        cout<<a<<endl;

    
    
    }
    return 0;
}