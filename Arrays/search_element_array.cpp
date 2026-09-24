#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter length of array :";
    cin>>n;

    int arr[n];
    int target = 30;

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<"Array :";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    // search 30 in an array?

    bool found=false;

    for(int i=0;i<n;i++) {
        if(arr[i]==target){
            found=true;
            break;
        }
    }
    if(found){
        cout<<"Exist"<<endl;
    }
    else{
        cout<<"Not Exist"<<endl;
    }

return 0;
}