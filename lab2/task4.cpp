#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{ 
	int N;
	cin >> N;
	while(true){
		if(N%2 != 0){
			break;
		}
		N /= 2;
	}
	if(N == 1){
		cout << "YES";
	} 
	else cout << "NO";

	return 0;
}

