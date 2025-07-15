#include<iostream>
#include<vector>
using namespace std;
int second_largest(vector<int>&arr);
int main(){
    vector<int> arr = {12,3,24,235,24,2334,34,23,25,5};
    int var = second_largest(arr);
    cout<<var<<endl;
}
int second_largest(vector<int>&arr){
    int max = arr[0];
    int sec_max = arr[0];
    for(int i = 0; i<arr.size()-1;i++){
        if(max<arr[i]){
            sec_max = max;
            max =arr[i];
        }
    }
    return sec_max;
}