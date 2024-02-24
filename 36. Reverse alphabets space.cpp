// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int i,j,n;
    char name;
    cout<<"enter a number:";
    cin>>n;
    for(int i = 1; i <= n; i++) {
        for(j = 1; j<= n - i; j++) {
            cout<<" ";
        }
        for(char name = 'a'; name<='a' + (i-1); name++) {
            cout<<name;
        }
        cout<<endl;
    }
   

    return 0;
}
