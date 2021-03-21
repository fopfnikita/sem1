#include <iostream>
#include <cstdlib>
#include <list>

using namespace std;

int main()
{
   int N;
   list<int> queue;
   cin >> N;
   for(int i = 0; i < N; i++){
    char c;
    cin>>c;
    if(c=='-'){
        cout<<queue.front()<<endl;
        queue.pop_front();
    }
    if(c=='+'){
        int inp;
        cin >> inp;
        queue.push_back(inp);
    }
    if(c=='*'){
        list<int>::iterator it = queue.begin(); 
        for(int j = 0; j < (queue.size()+1)/2; j++){
            it++;
        }
        int inp;
        cin >> inp;
        queue.insert(it, inp);
    }
   }
}
/*
7
+ 1
+ 2
* 3
+ 4
-
-
-
*/