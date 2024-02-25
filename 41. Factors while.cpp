// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int i,n;
    cout<<"Enter Number:";
    cin>>n;
    i = 1;
    while(i<=n) {
        if(n % i == 0) {
            cout<<i<<"";
        }
        i++;
    }
    return 0;
}
