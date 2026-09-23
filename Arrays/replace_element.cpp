#include <iostream>
using namespace std;

int main() {
    int arr[5]={10,20,30,40,50};

    // replace element by particular index.

    arr[1]=15;
    arr[3]=45;

    cout<<"Array :";

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}