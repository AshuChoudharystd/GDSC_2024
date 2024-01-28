//
// Created by DELL-PC on 1/27/2024.
//

//Ques 2:-Input the digits of square matrix [of order that is input by the user] and sort the non-boundary
//elements of the matrix.
//Also find the sum of diagonal elements of the matrix after sorting.
//Example:
//Enter the Order: 4
//Enter the Matrix:
//1 7 8 0
//9 6 5 3
//2 1 4 9
//1 6 1 5

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void matrix_input(vector<vector<int>>&v){
    int n=v.size();
    int input;
    for(int i=0;i<n;i++){
        cout<<"enter matrix "<<i+1<<" row: ";
        for(int j=0;j<n;j++){
            cin>>input;
            v[i].push_back(input);
        }
    }
}

void sort_non_boundry_elements(vector<vector<int>>&v){
    matrix_input(v);
    int n=v.size();
    vector<int>sorted;
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            sorted.push_back(v[i][j]);
        }
    }

    sort(sorted.begin(),sorted.end());


    int k=0;
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            v[i][j]=sorted[k++];
        }
    }
}

int main(){

    int n;
    cout<<"Enter the size of matrix: ";
    cin>>n;
    vector<vector<int>>vec(n);

    sort_non_boundry_elements(vec);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
