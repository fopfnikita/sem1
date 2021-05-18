#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

int main()
{
    int N;
    cin>>N;

    vector<int> f;
    vector<int> k;
    for(int i =0; i<N; i++){
        int y;
        cin>>y;
        f.push_back(y);
        cin>>y;
        k.push_back(y);
    }

    bool A = false;
    for(int i =0; i<N; i++){
        for(int j =0; j<N; j++){
            for(int l =0; l<N; l++){
                cout<<f[i]<<' '<<f[j]<<' '<<f[l];
                if(f[i]==f[j]+f[l] && k[i]==k[j]+k[l]){
                    A = true;
                }
            }
        }
    }
    if(A){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}
