# include <iostream>
using namespace std;

int is_prime(int num) {
    for(int i=2;i<num;i++) {

        // Not prime
        if(num%i==0){
            return 0;
        }
    }

    // prime
    return 1;
}

int main() {
    int result = is_prime(6);
    if(result == 0){
        cout<<"Not Prime"<<endl;
    }
    else{
        cout<<"Prime"<<endl;
    }
}