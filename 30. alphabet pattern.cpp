// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    char i,j;
 
    for(i=1;i<=5;i++) {
        char name = 'a' + (i-1);
        for(j=1;j<=i;j++) {
            cout<<name<<"";
            
        }
        cout<<endl;
    }
    

    return 0;
}
