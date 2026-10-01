#include <iostream>
using namespace std;

int main(){

    int arr[5]={10,20,30,40,50};

    cout<<"Before Reverse :";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int left = 0;
    int right = 4;

    while(left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
    cout<<"Reverse Array :";
    for(int i =0 ;i<5;i++){
        cout<<arr[i]<<" ";
    }

}