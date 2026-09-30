#include <iostream>
using namespace std;

int main() {
    int arr[6]={1,2,1,5,6,2};
    int ans = 0;

    for(int i=0;i<6;i++){
        ans = ans ^ arr[i];
    }
    cout<<"Unique Element :"<<ans<<endl;

return 0;
}