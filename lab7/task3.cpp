#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    long long sum = 0;
    long long sum_sq = 0;
    int num = 0;
    while(true){
        int inp;
        cin >> inp;
        if(inp==0){
            break;
        }
        num++;
        sum += inp;
        sum_sq += inp*inp;
    }
    double mean = (double)sum/num;
    double msq = (double)sum_sq/num;

    double disp = msq - mean*mean;

    mean = round(1000*mean)/1000;
    disp = round(1000*disp)/1000;

    cout<<fixed<<mean<<" "<<disp;
}
