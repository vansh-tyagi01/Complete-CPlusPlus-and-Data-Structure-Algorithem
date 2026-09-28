#include <iostream>
using namespace std;

void print_arr(int arr[] , int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int vansh[7] = {44,15,26,78,98,23,14};
    print_arr(vansh , 7);
}