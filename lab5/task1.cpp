#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;

int main() 
{
	int N, M;
	cin >> N >> M;
	queue<int> q;
	for(int i = 0; i < N; i++){
		int a;
		cin >> a;
		q.push(a);
	}
	for(int i = 0; i < M; i++){
		int b = q.front();
		q.pop();
		q.push(b);
	}
	for(int i = 0; i < N; i++){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}