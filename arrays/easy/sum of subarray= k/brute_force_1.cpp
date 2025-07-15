#include<iostream>
#include<vector>

using namespace std;

void print_nums(vector<int>&nums);
int sum_is_equal_k(vector<int>&nums, int k);

int main(){
    vector<int> nums = {1,3,4,34,54,234,45};
    int k= 42;
    int sum = sum_is_equal_k(nums,k);
    cout<<sum<<endl;
}
void print_nums(vector<int>&nums){
    for(int i=0;i<=nums.size()-1; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int sum_is_equal_k(vector<int>&nums,int k){
    int len =-1;
    for(int i = 0; i<nums.size(); i++){
        for(int j= 0;j<nums.size();j++){
            int sum= nums[i];
            for(int l=i+1;l<=j;l++){
                sum = nums[l]+sum;   
            }
            if(sum==k){
                len = max(len,j-i+1);

            }
        }
    }
    return len;
}