// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int i,n,fact;
    cout<<"enter number : ";
    cin>>n;
    fact = 1;
    for(i=1; i<=n; i++) {
        fact = fact *i;
    }
    cout<<"Factorial is: "<<fact;
    

    return 0;
}
