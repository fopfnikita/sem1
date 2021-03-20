#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int do_some_awesome_work(int* a, int* b);

 int main() 
{
	int a, b;
	cin>>a>>b;

	cout<<do_some_awesome_work(&a, &b);
	return 0;
}

int do_some_awesome_work(int* a, int* b){
	return (*a)*(*b);
}