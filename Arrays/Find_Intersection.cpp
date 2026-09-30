#include <iostream>
using namespace std;

int main() {
    int arr_1[5]={2,6,5,4,3};
    int arr_2[2]={5,4};

    int size_arr1 = sizeof(arr_1)/sizeof(int);
    int size_arr2 = sizeof(arr_2)/sizeof(int);

    for(int i=0;i<size_arr1;i++){
        for(int j=0;j<size_arr2;j++){
            if(arr_1[i] == arr_2[j]){
                cout<<arr_1[i]<<endl;
            }
        }
    }
}