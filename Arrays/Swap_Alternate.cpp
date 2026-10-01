#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int size_arr = sizeof(arr)/sizeof(int);

    cout<<"Array before swap Alternate :";
    for(int i=0;i<size_arr;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int start = 0;
    int next = 1;

    

    while(start <= size_arr-1) {
        int temp = arr[start];
        arr[start] = arr[next];
        arr[next] = temp;

        start = start + 2;
        next = next + 2;
    }

    cout<<endl;

    // Print Array
    cout<<"Array after swap Alternate :";
    for(int i=0;i<size_arr;i++){
        cout<<arr[i]<<" ";
    }
}