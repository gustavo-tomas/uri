#include <bits/stdc++.h>
using namespace std;

const char ops[11] = {'^','*','/','+','-','<','>','=',
                      '#','.','|'};

const char sym[13] = {'^','*','/','+','-','<','>','=',
                      '#','.','|','(',')'};

bool is_sym(char val){
    for(auto i : sym) if(i == val) return true;
    return false;
}

bool is_op(char val){
    for(auto i : ops) if(i == val) return true;
    return false;
}

int precedence(char val){
    if(val == '^') return 6;
    if(val == '*' || val == '/') return 5;
    if(val == '+' || val == '-') return 4;
    if(val == '>' || val == '<' ||
       val == '=' || val == '#') return 3;
    if(val == '.') return 2;
    if(val == '|') return 1;
    return 0;
}

// 0 - No error; 1 - Lexical error; 2 - Syntax error
int check_error(string infix){
    int open = 0;
    char last = '+';        // arbitrary operation
    for(auto i : infix){
        if(!isdigit(i) && !isalpha(i) && !is_sym(i)){
            return 1;
        } 
    }
    for(int j=0; j<infix.size(); j++){
        // operands with size > 2 are allowed
        int large = 0;
        while(j < infix.size() && (isdigit(infix[j]) || isalpha(infix[j]))){
            j++;
            large = 1;
        }
        if(large) j--;
        char i = infix[j];
        
        if(i != ')' && i != '('){
            // last was operand, curr must be operation
            if((isdigit(last) || isalpha(last)) && !is_op(i)){
                return 2;
            }
            // last was operation, curr must be operand
            else if(is_op(last) && !isdigit(i) && !isalpha(i)){
                return 2;
            }
        }
        
        if(i == '(') open++;
        else if(i == ')') open--;
        if(open < 0) return 2;
        last = i;
    }
    if(open != 0) return 2;
    return 0;
}

string infix_to_post(string infix){
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
    return postfix;
}

int main(){

    string infix;
    while(getline(cin, infix)){
        int error = check_error(infix);
        if(error == 0){
            cout << infix_to_post(infix) << endl;
        } else if (error == 1){
            cout << "Lexical Error!" << endl;
        } else {
            cout << "Syntax Error!" << endl;
        }
    }
    return 0;
}