#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{ 
	int A, B;
	cin >> A >> B;
	while(true){
		if (A < B){
			B %= A;
		}
		else if (B < A){
			A %= B;
		}
		if (B * A == 0){
			cout << A + B;
			break;
		}
	}
    return 0; 
}