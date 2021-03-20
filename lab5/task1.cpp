#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() 
{
	vector<int> stack;
	int n = -1;
	while(n != 0){
		cin >> n;
		if(n>0){
			stack.push_back(n);
		} else if(stack.size()>0){
			if (-n < stack.back()){
				stack.back()+=n;
			}
			else{
				stack.pop_back();
			}
		}
	}
	int a = -1;
	if(stack.size() >0){
		a = stack.back();
	}
	cout << stack.size() << " " << a;
}