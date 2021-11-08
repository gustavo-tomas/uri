#include <bits/stdc++.h>
using namespace std;

bool is_op(char val){
    if( val == '-' || val == '+' || val == '*' ||
        val == '/' || val == '^') return true;
    return false;
}

int precedence(char val){
    if(val == '^') return 3;
    if(val == '*' || val == '/') return 2;
    if(val == '+' || val == '-') return 1;
    return 0;
}

int main(){

    int n;
    cin >> n;
    string infix;
    getline(cin, infix);
    while(n--){
        getline(cin, infix);
        string stack = "(", postfix = "";
        infix += ')';

        for(auto i : infix){
            if(i == '(') stack += i;
            else if(isdigit(i) || isalpha(i)) postfix += i;
            else if(is_op(i)){
                while(is_op(stack.back()) && precedence(stack.back()) >= precedence(i)){
                    postfix += stack.back();
                    stack.pop_back();
                }
                stack += i;                    
            }
            else if(i == ')'){
                while (stack.back() != '('){
                    postfix += stack.back();
                    stack.pop_back();
                }
                stack.pop_back();
            }
        }
        cout << postfix << endl;
    }
    return 0;
}