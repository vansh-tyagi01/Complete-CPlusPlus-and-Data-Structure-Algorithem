#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Length of an array :";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int lenth = sizeof(arr)/sizeof(arr[0]);

    cout<<"Array :";

    for(int i=0;i<lenth;i++){
        cout<<arr[i]<<" ";
    }

    // Find Min Max

    int min = arr[0];
    int max = arr[0];

    for(int i=1;i<lenth;i++){
        if(arr[i]<min){
            min = arr[i];
        }

        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<endl;
    
    cout<<"Maximum :"<<max<<endl;
    cout<<"Minimum :"<<min<<endl;

return 0;
}