#include<iostream>
#include<vector>

using namespace std;

int consecutive_ones(vector<int> &arr);

// Accessing arr[i-1] when i=0:
// if(arr[i]==0 && arr[i-1]==1)
// This causes undefined behavior on the first iteration.

// Final count not pushed if array ends with 1s:
// If the array ends in 1s, the final sequence isn't added to couting.


int main(){
    vector<int>arr = {0,1,1,0,1,0,1,1,1};
    int n = consecutive_ones(arr);
    cout<<n;
}

int consecutive_ones(vector<int> &arr){
    vector<int>couting;
    int count =0;
    for(int i = 0; i<arr.size();i++){
        if(arr[i]==1){
            count++;
        }
        if(arr[i]==0&&arr[i-1]==1){
            couting.push_back(count);
            count =0;
        }
    }
    int max = couting[0];
    for(int i=1; i<couting.size();i++){
        if(couting[i]>max){
            max = couting[i];
        }
    }
    return(max);
}