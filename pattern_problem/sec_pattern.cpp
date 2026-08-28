#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number to print pattern row wise :";
    cin>>n;

    int i = 1;

    while(i<=n) {
        int j = 1;
        while(j<=n){
            cout<<n-j+1<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}