#include<iostream>
#include<vector>
using namespace std;
void mergesort(vector<int>&arr,int low, int high);
void merge(vector<int>&arr,int low, int mid, int high);
int main(){
    vector<int>arr = {1,2345,3562,65,5,256,455,32};
    mergesort(arr,0,(arr.size()-1));
    for(int x: arr)cout<<x<<" ";
    cout<<endl;
}

void mergesort(vector<int>&arr,int low, int high) {
    int mid = (low+high)/2;
    if(low>=high){
        return;
    }
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);    
}

void merge(vector<int>&arr,int low, int mid, int high){
    vector<int>temp ={};
    int left = low;
    int right = mid+1;
    while(left<=mid&&right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    } 
    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

