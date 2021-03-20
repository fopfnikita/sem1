#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main() 
{ 
	int N;
	string ans;
	cin >> N;
	while(N > 0){
		string p;
		int A = N%60;
		while(A>=10){
			A-=10;
			p += "<";
		}
		while(A > 0){
			A-=1;
			p += "v";
		}
		if (N/60>0){
			p = "." + p;
		}
		N/=60;
		ans = p+ans;
	}
	cout << ans;
}