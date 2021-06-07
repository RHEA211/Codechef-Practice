 #include <iostream>
using namespace std;

int main() {
 
 int a, b, c, diff, max=0, winner, temp,cl1=0,cl2=0;//cl=cumulative
 cin>>a;
 while(a--) {
  cin>>b>>c;
 cl1+=b;
 cl2+=c;
  if(cl1>cl2) {
   diff=cl1-cl2; temp=1;
  }
  else {
   diff=cl2-cl1; temp=2;
  }
  if(diff>max) {
   max=diff; winner=temp;
   
  }
 
 }
 cout<<winner<<" "<<max;
 return 0;
}

   
