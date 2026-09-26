# include <iostream>
using namespace std;

int main() {
    int num = 2;

    switch(2 * num){  // expression 2 * num 
        case 2:
                cout<<"Case 2 execute"<<endl;
        case 4:
                cout<<"Case 4 execute"<<endl;
                break;
        default:
                cout<<"Default case"<<endl;
    }
}