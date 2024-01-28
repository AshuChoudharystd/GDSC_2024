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
/*
1.The code you have selected is a function called convertToPalindrome that takes a
sentence as a string and returns a string with each word converted to a palindrome
if it is not already one.
2.It uses an istringstream to tokenize the input sentence into individual words based
on spaces. It initializes an empty string ans to hold the output.
3.Then it loops through each word, checking if it is a palindrome using the isPalindrome
function. If it is not a palindrome, it concatenates the reverse of the word to the
original to make it a palindrome.
4.It adds the word and a space to the ans string. After looping through all words, it
returns ans which will contain all the words converted or unchanged separated by spaces.*/

int main() {
    string sentence = "The stats show that the civic policy was a success";
    cout << convertToPalindrome(sentence) << endl;
    return 0;
}
