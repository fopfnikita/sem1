#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() 
{ 
	vector<int> numbers;
	int max = 0;
	while(true){
		int A;
		cin >> A;
		numbers.push_back(A);
		if(A==0){
			break;
		}
		if(max < A){
			max = A;
		}
	}
	int count = 0;
	for(int i=0; i!=numbers.size(); ++i){
		if(numbers[i]==max){
			count++;
		}
	}
	cout << count;
}