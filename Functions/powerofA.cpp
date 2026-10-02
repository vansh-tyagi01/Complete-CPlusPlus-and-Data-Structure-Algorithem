# include <iostream>
using namespace std;

int powerofNum(int a,int b){
        int ans = 1;
        for(int i = 1;i<=b;i++){
            ans = ans * a;
        }
        return ans;
    }

int main() {
    cout<<"Answer :"<<powerofNum(4,3)<<endl;
}
