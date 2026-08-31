#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10,20,30,40,50};

    // Find Length of an array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}