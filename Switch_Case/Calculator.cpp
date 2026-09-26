# include <iostream>
using namespace std;

int main() {
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Remainder"<<endl;

    int choice;
    cout<<"Enter your choice?(1,2,3,4,5) :";
    cin>>choice;

    int num_1;
    cout<<"Enter first Number :";
    cin>>num_1;

    int num_2;
    cout<<"Enter second Number :";
    cin>>num_2;

    switch(choice){
        case 1:
                cout<<"Result :"<<" "<<num_1 + num_2<<endl;
                break;
        case 2:
                cout<<"Result :"<<" "<<num_1 - num_2<<endl;
                break;
        case 3:
                cout<<"Result :"<<" "<<num_1 * num_2<<endl;
                break;
        case 4:
                if(num_2 != 0){
                    cout<<"Result :"<<" "<<num_1 / num_2<<endl;
                    break;
                }
                else{
                    cout<<"Not Divisible by 0"<<endl;
                    break;
                }
        case 5:
                cout<<"Remainder :"<<" "<<num_1 % num_2<<endl;
                break;
                
        default:
                cout<<"Invalid Input"<<endl;
                break;
    }
}