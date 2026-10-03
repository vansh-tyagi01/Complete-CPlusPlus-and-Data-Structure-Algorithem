# include <iostream>
using namespace std;

int Count_bit(int a,int b) {
    int count = 0;

    while(a != 0){
        count+=(a&1);

        a=a>>1;
    }

    while(b != 0){
        count+=(b&1);

        b=b>>1;
    }

    return count;

}

int main() {
    cout<<Count_bit(2,7)<<endl;
}