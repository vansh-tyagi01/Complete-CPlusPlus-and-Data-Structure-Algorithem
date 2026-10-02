// nCr Formula = n! / r! *(n! - r!)

# include <iostream>
using namespace std;

// Factorial Function
int Factorial(int num) {
    int fact = 1;

    for(int i = 1;i<=num;i++) {
        fact*=i;
    }
    return fact;
}

// nCr Function
int nCr(int n,int r) {
    int numerator = Factorial(n);

    int denominator = Factorial(r) * Factorial(n - r);

    int result = numerator/denominator;

    return result;
}



int main() {
    cout<<nCr(8,2)<<endl;
}