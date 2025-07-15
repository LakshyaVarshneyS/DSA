#include<iostream>
#include<vector>

using namespace std;

void print_arr(vector<int>&arr);
int binary_search(vector<int>&arr,int k);

int main(){
    vector<int> nums = {1,3,4,34,54,234,45};
    int a = binary_search(nums,54);
    cout<<a;
}

void print_arr(vector<int>&arr){
    for(int i=0;i<=arr.size()-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int binary_search(vector<int>&arr,int k){
    int first = 0;
    int last = arr.size()-1;
    
    while(last>=first){
        int mid = (first+last)/2;

        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            last =mid;
        }
        else{
            first = mid+1;
        }
    }
    return -1;

}