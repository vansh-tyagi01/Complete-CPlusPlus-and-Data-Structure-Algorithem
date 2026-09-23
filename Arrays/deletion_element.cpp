#include <iostream>
using namespace std;

int main() {
    int arr[5]={10,20,30,40,50};    // delete 30
    int n=5;
    for(int i=2;i<n-1;i++) {
        arr[i]=arr[i+1];
    }
    n--;
    
    cout<<"Array :";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
return 0;
}