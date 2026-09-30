#include <iostream>
using namespace std;

int main(){
    int arr[10] = {0,1,1,0,1,0,1,0,0,1};
    int zero = 0;
    int one = 9;

    // Before arrangement
    cout<<"Before Arrangement : ";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    while(zero < one){
        if(arr[zero] == 0){
            zero++;
        }
        if(arr[one] == 1){
            one--;
        }
        if(arr[zero] == 1 && arr[one] == 0){
            int temp = arr[zero];
            arr[zero] = arr[one];
            arr[one] = temp;
        }
        zero++;
        one--;
    }
    // After Arrangement
    cout<<"After Arrangement : ";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}