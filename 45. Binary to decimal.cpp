#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number :";
    cin>>num;
    int ans=0, rem, mul =1;
    
    while(num>0) {
        rem = num % 10;
        num /= 10;
        ans += rem * mul;
        mul *= 2;
    }
    cout<<ans;
    return 0;
}
