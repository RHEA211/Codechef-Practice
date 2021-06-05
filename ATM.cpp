#include<bits/stdc++.h>
using namespace std;

int main()
{
int with;//withdraw
  float bal;//balance
  cin>>with>>bal;
  float totalAmount = with + 0.5;
  if(with%5!=0 || totalAmount>bal)
    cout<<bal;
  else 
    cout<< bal - totalAmount;
	return 0;
}
