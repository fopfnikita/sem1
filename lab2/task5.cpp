#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{ 
	int count = 0;
	int max = 0;
	while(true){
		int A;
		cin >> A;
		if(A==0){
			break;
		}
		if(A%2==0){
			if(max < A){
				max = A;
			}
		}
	}
	cout << max;
}