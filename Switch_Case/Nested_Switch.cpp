# include <iostream>
using namespace std;

int main() {
    int n = 1;
    char ch = 'k';
    switch(n) {

        case 1: switch(ch){
            case 'k':
                cout<<"Value of character is :"<<ch<<endl;
                break;
            }
            break;



        case 2:
                cout<<"second Number"<<endl;
                    break;

        default :
                cout<<"It is default"<<endl;
            }
}