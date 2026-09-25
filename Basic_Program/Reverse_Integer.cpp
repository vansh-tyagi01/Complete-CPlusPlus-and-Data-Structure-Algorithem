# include <iostream>
using namespace std;

int main() {
    int num , rev = 0;
    cout<<"Enter a number :";   // 123
    cin>>num;

    while(num != 0) {
        int digit = num % 10;

        if(rev > 2147483647 / 10 || rev < -2147483648 / 10){

            cout<<0<<endl;
            return 0;

        }

        rev = (rev * 10) + digit;
        num = num / 10;
    }
    
    cout<<"Reverse Integer :"<<" "<<rev<<endl;

    return 0;
}