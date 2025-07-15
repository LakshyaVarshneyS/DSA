#include<bits/stdc++.h>

using namespace std;

pair<int,int>floor_cealing_of_arr(vector<int>arr,int x);
void print_arr(vector<int>&arr);

int main(){
    vector<int> arr = {12,13,13,14,15,15,17,18,19,19,21,21};
    pair<int,int>sol = floor_cealing_of_arr(arr,14);
    print_arr(sol);
}

void print_arr(vector<int>&arr){
    for(int i=0;i<=arr.size()-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
pair<int,int>floor_cealing_of_arr(vector<int>arr,int x){
    int first=0;
    int last = arr.size()-1;
    int ans= 0;
    pair<int,int>arr1;
    
    while(last>=first){
        int mid = (first+last)/2;
        if(arr[mid]>=x){
            ans  = mid;
            last = mid-1;
        }
        else{
            first = mid+1;
        }
    }
    arr1.first=arr[ans];
    for(int i=ans;i<arr.size();i++){
        if(arr[i]!=arr[i+1]){
            arr1.second = (arr[i+1]);
            return arr1;
        }
    }
    arr1.second = (arr[ans]);
    return arr1;
}