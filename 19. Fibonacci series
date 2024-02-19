// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int i,n,current = 0,prev=2,last=1;
    cout<<"enter number : ";
    cin>>n;
    for(i=1;i<=n;++i) {
        if(i==1) {
            cout<<last<<",";
            continue;
        }
        if(i == 2) {
            cout<<prev<<",";
            continue;
        }
        
        current = prev + last;
        last = prev;
        prev = current;
        cout<<current<<",";
    }
    

    return 0;
}
