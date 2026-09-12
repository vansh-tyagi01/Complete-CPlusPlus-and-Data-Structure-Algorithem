#include <iostream>
using namespace std;

int main() {
    int arr[5]={10,20,30,50};
    int n=4;
    int pos=3;
    int value=40;

    cout<<"Array before insert element :";
    for(int b=0;b<4;b++){
        cout<<arr[b]<<" ";
    }

    cout<<endl;

    // insert element inedex 3
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    n++;

    cout<<"Array After insert element :";
    for(int j=0;j<5;j++){
        cout<<arr[j]<<" ";
    }
return 0;
}