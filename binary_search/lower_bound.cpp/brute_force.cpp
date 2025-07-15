#include<iostream>
#include<vector>

using namespace std;

int lower_bound(vector<int>&arr,int k);

int main(){
    vector<int> nums = {1,3,4,34,54};
    int a = lower_bound(nums,33);
    cout<<a;
}

int lower_bound(vector<int>&arr,int k){
    for(int i = 0; i<arr.size();i++){
        if(arr[i]==k){
            return i;
        }
        else if(arr[i]>k){
            return i;
        }
    }
    
}
