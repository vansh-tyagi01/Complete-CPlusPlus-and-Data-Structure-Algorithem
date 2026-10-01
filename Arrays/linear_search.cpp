#include <iostream>
using namespace std;

bool search(int arr[], int target_num, int size){

    for(int i=0;i<size;i++){

        if(target_num == arr[i]){
            return 1;
        }
    }
    return 0;
}


int main() {
    int arr[5] = {12,3,7,8,19};

    // whether element is present in it or not ?

    int tar;
    cout<<"Enter target number :";
    cin>>tar;

    int result = search(arr,tar,5);
    
    if(result == 1){
        cout<<tar<<" "<<"Found"<<endl;
    }
    else{
        cout<<tar<<" "<<"Not Found"<<endl;
    }

}