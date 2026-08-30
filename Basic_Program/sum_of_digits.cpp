#include <iostream>
using namespace std;

int main() {
    int digits;
    int digit,sum=0;
    cout<<"Enter your Digits :";
    cin>>digits;

    while(digits > 0) {
        digit = digits % 10;
        sum+=digit;
        digits/=10;
    }
    cout<<"Sum of Digits :"<<sum<<endl;
}