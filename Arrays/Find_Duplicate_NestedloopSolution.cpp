#include <iostream>
using namespace std;

int main() {
    int arr[8] = {1,5,2,1,2,7,8,8};
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<endl;
            }
        }
    }
}