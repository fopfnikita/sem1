#include <iostream>
#include <cstdlib>
#include <list>

using namespace std;

int main()
{
    int a, b, c, d, ans;
    cin>>a>>b>>c>>d>>ans;
    if(a+ans==b && c*ans==d){
        cout<<5;
        return 0;
    }
    if(a+ans==b || c*ans==d){
        cout<<4;
        return 0;
    }
    if(ans==1024){
        cout<<3;
        return 0;
    }
    cout<<2;
    return 0;
}
