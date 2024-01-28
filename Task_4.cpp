//
// Created by DELL-PC on 1/28/2024.
//
//Ques 4:-Given an array of integers, your task is to find the maximum sum of a contiguous subarray.
//A contiguous subarray is defined by selecting a range of elements from the array without
//skipping any element.
//Write a function that takes a list of integers nums as input and returns the maximum sum of a
//contiguous subarray.
//[-2, 1, -3, 4, -1, 2, 1, -5, 4]
//output: 6 -> [4, -1, 2, 1]

#include "iostream"
#include "vector"
using namespace std;

int largest_sum(vector<int>&v){
    int n=v.size();
    int max_sum=v[0];
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=v[i];

        max_sum=max(max_sum,sum);//returns the max value to max_sum

        if(sum<=0){//prevents the minimization of sum
            sum=0;
        }
    }
    return max_sum;
}

int main(){

    vector<int>vec={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<largest_sum(vec)<<endl;

    return 0;
}