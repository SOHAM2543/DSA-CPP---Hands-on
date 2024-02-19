// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int i,n,fact;
    cout<<"enter number : ";
    cin>>n;
    if(n<2) {
      cout<<"not prime";
      return 0;
    } else {
        for(i=2; i<n;i++) {
            if(n%i == 0) {
                cout<<"Not prime";
                return 0;
            }
            
        }
        cout<<"prime number";
    }
    

    return 0;
}
