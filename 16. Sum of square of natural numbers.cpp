// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int i,n,sum;
    cout<<"enter number : ";
    cin>>n;
    for(i=1; i<n; i++) {
        sum = sum + i*i;
    }
    cout<<"Sum of square of all natural number is: "<<sum;
    

    return 0;
}
