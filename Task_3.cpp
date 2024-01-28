//
// Created by DELL-PC on 1/28/2024.
//
//Ques 3:- Input a sentence from the user and convert all the non-palindrome words into palindromes
//by concatenating the reverse of the word to itself.
//Example:
//The stats show that the civic policy was a success
//Output:
//Theht stats showohs thataht theht civic policycilop wasaw a successseccus

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isPalindrome(const string& word) {
    int start = 0;
    int end = word.length() - 1;
    while (start < end) {
        if (word[start] != word[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

string convertToPalindrome(const string& sentence) {
    istringstream iss(sentence);
    string word;
    string ans = "";
    while (iss >> word) {
        if (!isPalindrome(word)) {
            word += string(word.rbegin(), word.rend());
        }
        ans += word + " ";
    }
    return ans;
}

int main() {
    string sentence = "The stats show that the civic policy was a success";
    cout << convertToPalindrome(sentence) << endl;
    return 0;
}
