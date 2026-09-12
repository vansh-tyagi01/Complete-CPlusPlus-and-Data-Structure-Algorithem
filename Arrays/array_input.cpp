#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Length of an array :";
    cin>>n;

    int arr[n];



    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int lenth = sizeof(arr)/sizeof(arr[0]);

    cout<<"Array :";

    for(int i=0;i<lenth;i++){
        cout<<arr[i]<<" ";
    }
}