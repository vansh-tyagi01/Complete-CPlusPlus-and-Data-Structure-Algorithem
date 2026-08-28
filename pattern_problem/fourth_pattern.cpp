#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number :";
    cin>>n;

    int row = 1;
    int count = 1;

    while(row<=n) {
        int col = 1;
        while(col<=row) {
            cout<<count<<" ";
            count+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}