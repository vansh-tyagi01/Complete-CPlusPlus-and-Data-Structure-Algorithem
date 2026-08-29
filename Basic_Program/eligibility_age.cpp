#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter your Age :";
    cin>>age;

    int eligible = 18;

    if(age >= eligible) {
        cout<<"You are eligible for vote";
    }

    else {
        cout<<"You are not eligible for vote";
    }
}