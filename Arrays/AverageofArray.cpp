#include <iostream>
using namespace std;

int main() {
    int sum=0;
    int arr[5]={1,2,3,4,5};
    int l= sizeof(arr) / sizeof(arr[0]);
    
    for(int i=0;i<l;i++) {
        sum+=arr[i];
    }
    int avg = sum / l;
    cout<<"Average :"<<avg;
}