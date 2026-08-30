#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number :";
    cin>>num;

    int row = 1;
    while(row<=num) {
        int col = 1;
        while(col<=row) {
            cout<<"*"<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }

return 0;
}