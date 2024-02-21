//
// Created by DELL-PC on 1/27/2024.
//

//Ques 1:-You are given a string containing three types of parentheses: '(', ')', '{', '}', '[' and ']'. The goal is to too
//determine whether the input string is valid or not.
//A string is considered valid if:
//Open brackets must be closed by the same type of brackets.
//Open brackets must be closed in the correct order.
//Write a function is_valid_parentheses(s: str) -> bool that takes a string s as input and returns
//True if the string is valid, and False otherwise.


#include <iostream>
#include "string"
#include "stack"
using namespace std;

bool valid_string(string str){
    int n=str.size();
    stack<char>s;

    for(int i=0;i<n;i++){
        if(s.empty()){
            s.push(str[i]);
        }else if(s.top()=='(' && str[i]==')' ||
                 s.top()=='{' && str[i]=='}' ||
                 s.top()=='[' && str[i]==']')
        { s.pop();}
        else{
            s.push(str[i]);
        }
    }if(s.empty()){
        return true;
    }
    return false;
}

int main(){

    string str="{[()]}{{[[())]]}}";
    if(valid_string(str) == true){
        cout<<"Correct String"<<endl;
    }else{
        cout<<"Incorrect string"<<endl;
    }

    return 0;
}