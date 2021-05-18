#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

struct Dot{
	double x;
	double y;
	double z;

	bool operator < (Dot &a){
	double ra2 = (double)a.x*a.x + (double)a.y*a.y + (double)a.z*a.z;
	double rb2 = (double)x*x + (double)y*y + (double)z*z;
	return ra2>rb2;
	}
};

int* allocate(int n){
	int * a = new int[n];
	return a;
}

int* reallocate(int* a, int n, int m){
	int * A = new int[m];
	for(int i =0; i<n; i++){
		a[i] = A[m];
	}
	return A;
}


int search(int* a , int n, int x, bool sorted){
	if(sorted){
		int l = 0;
		int r = n;
		while(l!=r-1){
			int m = (l+r)/2;
			if(a[m] > x){
				r = m;
			}else{
				l = m;
			}
		}
		if(a[l] == x){
			return l;
		}else if(a[r] == x){
			return r;
		}else return -1;
	}
	for(int i =0; i<n; i++){
		if(a[i] == x){
			return i;
		}
	}
	return -1;
}

void sorting(Dot* a, int n){
	if(n==1){
		return;
	}
	int m = n/2;
	Dot* a1 = new Dot[m];
	for(int i =0;i<m;i++){
		a1[i] = a[i];
	}
	Dot* a2 = new Dot[n-m];
	for(int i =0;i<n-m;i++){
		a2[i] = a[i+m];
	}
	sorting(a1, m);
	sorting(a2, n-m);

	int counter1 = 0;
	int counter2 = 0;

	int i=0;
	while(i<n){
		if((a1[counter1]<a2[counter2] && counter1 != m) || counter2 == n-m){
			a[i]=a1[counter1];
			counter1++;
			i++;
		}else{
			a[i]=a2[counter2];
			counter2++;
			i++;
		}
	}
}

int main(){
	int N = 10;
	Dot *A = new Dot[N];
	for(int i =0; i<N; i++){
		A[i] = {rand()%100, rand()%100, rand()%100};
	}
	sorting(A, N);
	for(int i =0; i<N; i++){
		Dot a = A[i];
		cout<<A[i].x<<" "<<A[i].y<<" "<<A[i].z<<" "<<(double)a.x*a.x + (double)a.y*a.y + (double)a.z*a.z<<endl;
	}
	return 0;
}