#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() 
{
	int N, M, count;
	cin >> N >> M >> count;
	const int size_w = N;
	const int size_h = M;
	vector<vector<int>> map(size_w, vector<int>(size_h, 0));
	for(int i =0; i<N; i++){
		for(int j =0; j<M; j++){
			map[i][j]=0;
		}
	}
	for(int i =0; i<count; i++){
		int x_b, y_b;
		cin >> x_b >> y_b;
		x_b--; y_b--;
		for (int x = x_b-1; x <= x_b+1; x++){
			if(x>=0 && x<N){
				for (int y = y_b-1; y <= y_b+1; y++){
					if(y>=0 && y<M){
						if(y==y_b && x==x_b){
							map[x][y] = -1;
						}
						if(map[x][y] != -1){
							map[x][y]++;
						}
					}
				}
			}
		}
	}
	for(int i =0; i<N; i++){
		for(int j =0; j<M; j++){
			cout<<map[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}