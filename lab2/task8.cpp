#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>

using namespace std;

int main() 
{ 
	int N;
	cin >> N;
	for(int i = 2; i < sqrt(N)+1; i++){
		if(N%i == 0){
			cout << i <<endl;
			N /= i;
			i--;
		}
	}
	if (N >1) cout << N;
	return 0;
}