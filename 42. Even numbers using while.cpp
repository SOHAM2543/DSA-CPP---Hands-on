// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int i,n;
    cout<<"Enter Number:";
    cin>>n;
    i = 1;
    while(i<=n) {
        if(i % 2 == 0) {
            cout<<"even numbers are: "<<i<<endl;
        }
        i++;
    }
    return 0;
}
