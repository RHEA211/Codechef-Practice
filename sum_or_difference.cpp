//Output a single line containing the difference of 2 numbers(N1−N2) if the first number is greater than the second number 
//otherwise output their sum (N1+N2)

#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n1,n2;
   
    
    cin>>n1;
    cin>>n2;
    if(n1>n2){
        cout<<n1-n2;
    }
else{
    cout<<n1+n2;
}
}
