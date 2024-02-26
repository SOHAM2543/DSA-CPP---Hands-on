// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int num,rem, ans = 0, mul=1;
    cout<<"Enter number :";
    cin>>num;
    while(num > 0) {
        rem = num % 2;
        num /= 2;
        ans += rem * mul;
        mul *= 10;
        
    }
    cout<<ans;
    

    return 0;
}
