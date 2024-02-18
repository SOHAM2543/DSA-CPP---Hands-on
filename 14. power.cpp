#include<iostream>
using namespace std;

int main() {
   int pow,n,i,num;
   cout<<"enter number";
   cin>>n;
   cout<<"enter a power";
   cin>>pow;
   num=n;
   for(i=1;i<pow;i++) {
       num=num*n;
   }
   cout<<num;
}
