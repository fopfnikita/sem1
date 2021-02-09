#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

vector<long long> nums;

long long nr_fib(int n){
    long long f1 = 1, f2 = 1;
    for(int i =2; i<n; i++){
        long long t = f1;
        f1 = f2;
        f2 = f1+t;
    }
    return(f2);
}
long long r_fib(int n){
    if(n<3){
        return 1;
    }
    return(r_fib(n-1)+r_fib(n-2));
}
long long or_fib(int n){
    if(n<3){
        return 1;
    }if(nums[n]!=0){
        return nums[n];
    }
    return(or_fib(n-1)+or_fib(n-2));
}


int main() 
{ 
	int n;
    cin >> n;
    nums.resize(n);
    cout << "Choose type: non-rec, rec or opt-rec"<<endl;
    string type;
    cin >> type;
    if(type == "non-rec"){
        cout<<nr_fib(n)<<endl;
    }
    if(type == "rec"){
        cout<<r_fib(n)<<endl;
    }
    if(type == "opt-rec"){
        cout<<or_fib(n)<<endl;
    }
    
    return 0; 
}