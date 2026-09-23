#include <iostream>
using namespace std;

int main() {
    int count=0;
    int arr[5]={1,2,7,8,14};

    for(int i=0;i<5;i++) {
        if(arr[i]%2==0){
            count+=1;
        }
    }
    cout<<count;

return 0;    
}