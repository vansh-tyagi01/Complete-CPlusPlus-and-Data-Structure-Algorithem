# include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a Number :";
    cin>>n;

    int mask = 0;
    int temp = n;  // 5 , 2 , 1 , 0 -- >exit
    while(temp != 0){
        mask = (mask << 1) | 1;
        temp = temp >> 1;
    }

    int ans = (~n)&mask;

    cout<<"Answer :"<<" "<<ans<<endl;
}