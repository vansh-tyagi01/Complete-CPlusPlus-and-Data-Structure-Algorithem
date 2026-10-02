# include <iostream>
using namespace std;

int Even_Odd(int num) {
    if(num%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int num;
    cout<<"Enter a Number :";
    cin>>num;

    int result = Even_Odd(num);
    if(result==1){
        cout<<"Even Number"<<endl;
    }
    else{
        cout<<"Odd Number"<<endl;
    }

}