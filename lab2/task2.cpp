#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{ 
	int YEAR;
	cin >> YEAR;
	if(YEAR%400==0){
		cout<<"YES";
	}
	else if(YEAR%100==0){
		cout<<"NO";
	}
	else if(YEAR%4==0){
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}