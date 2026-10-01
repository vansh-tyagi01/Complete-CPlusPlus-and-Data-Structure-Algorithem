#include <iostream>
#include <climits>
using namespace std;

int getmin(int arr[] , int size){
    int min = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}


int getmax(int arr[] , int size){
    int max = INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}


int main() {
    int vansh[6] = {3,87,45,23,13,99};

    cout<<"Array :";
    for(int i=0;i<6;i++){
        cout<<vansh[i]<<" ";
    }
    cout<<endl;

    cout<<"Maximum Value :"<<getmax(vansh,6)<<endl;
    cout<<"Minimum Value :"<<getmin(vansh,6)<<endl;
}