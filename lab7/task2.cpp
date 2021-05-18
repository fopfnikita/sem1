#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main(){
    bool a = false;
    int N;
    cin>>N;
    for(int k =0;k<N;k++){
        int i;
        cin >> i;
        if( (i%4==0 && i/1000 != 4 && i/1000 != 5) ||
            (i%7==0 && i/1000 != 7 && i/1000 != 1) ||
            (i%9==0 && i/1000 != 9 && i/1000 != 8)){
            a = true;
            cout << i<<endl;
        }
    }
    if(!a){
        cout<<0;
    }
}
