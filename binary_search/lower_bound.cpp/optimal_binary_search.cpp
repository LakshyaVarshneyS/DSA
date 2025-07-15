#include<iostream>
#include<vector>

using namespace std;

int lower_bound(vector<int>&arr,int k);

int main(){
    vector<int> nums = {1,3,4,5,34,54};
    int a = lower_bound(nums,5);
    cout<<a;
}

int lower_bound(vector<int>&arr,int k){
   int first=0;
   int ans;
   int last =arr.size()-1;
   while(last>=first){

    int mid = (last+first)/2;

    if(arr[mid]>=k){
        ans =mid;   
        last =mid-1;
    }
    else{
        first = mid+1;
    }
   }
   return ans;
}
