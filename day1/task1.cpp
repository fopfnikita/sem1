#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int fact(int i, int a){
	if (a > 1) {
		return fact(i*a, a-1);
	}
	else return i;
}

long l_fact(long i, long a){
	if (a > 1) {
		return l_fact(i*a, a-1);
	}
	else return i;
}

long long ll_fact(long long i, long long a){
	if (a > 1) {
		return ll_fact(i*a, a-1);
	}
	else return i;
}

int main() 
{ 
	int a;
    cin >> a;
    cout<<fact(1, a)<<endl;
    long long prev = 1;
    for (int i = 1; i < 1000; i++){
    	if (fact(1, i)/prev != i){
    		cout << "max good val for int = "<< i-1<<endl;
    		break;
    	}
    	prev = fact(1, i);
    }
    prev = 1;
    for (long i = 1; i < 1000; i++){
    	if (l_fact(1, i)/prev != i){
    		cout << "max good val for long = "<< i-1 <<endl;
    		break;
    	}
    	prev = l_fact(1, i);
    }
    prev = 1;
    for (long long i = 1; i < 1000; i++){
    	if (ll_fact(1, i)/prev != i){
    		cout << "max good val for long long = "<< i-1<<endl;
    		break;
    	}
    	prev = ll_fact(1, i);
    }
    return 0; 
}