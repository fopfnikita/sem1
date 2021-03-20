#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main() 
{ 
	int salary = 0;
	while(true){
		int v;
		string num;
		cin >> v >> num;
		if (num == "A999AA"){
			break;
		}
		if (v <= 60) continue;
		if (num[1]==num[2] && num[3]==num[2]){
			salary += 1000;
		} else if (num[1]==num[2] || num[3]==num[2] || num[3]==num[1]){
			salary += 500;
		}else salary += 100;
	}
	cout << salary;
}