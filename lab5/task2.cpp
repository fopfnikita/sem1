#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    vector<int> stack;
    do{  
        char c;
        cin>>c;

        if(c=='+' || c == '*' || c == '-' && ( cin.peek()<'0' || cin.peek()> '9') ||c == '/'){
            int a = stack.back();
            stack.pop_back();
            int b = stack.back();
            stack.pop_back();
            if(c == '+' ){
                stack.push_back(a + b);
            }
            if(c == '-' ){
                stack.push_back(b - a);
            }
            if(c == '*' ){
                stack.push_back(a * b);
            }
            if(c == '/' ){
                stack.push_back(b / a);
            }
        } else if (c != ' ' && c != '\n'){
            cin.unget();
            int i;
            cin>>i;
            stack.push_back(i);
        }

    } while (cin.peek() != EOF && cin.peek() != '\n');
    cout<<stack.back();
    return 0;
}