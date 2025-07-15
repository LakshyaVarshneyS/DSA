#include<bits/stdc++.h>

using namespace std;

vector<int>floor_cealing_of_arr(vector<int>arr,int x);
void print_arr(vector<int>&arr);

int main(){
    vector<int> arr = {12,13,13,14,15,15,17,18,19,19,21,21};
    vector<int>sol = floor_cealing_of_arr(arr,14);
    print_arr(sol);
}

void print_arr(vector<int>&arr){
    for(int i=0;i<=arr.size()-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
vector<int>floor_cealing_of_arr(vector<int>arr,int x){
    int first=0;
    int last = arr.size()-1;
    int ans= 0;
    vector<int>arr1;
    
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
    arr1.push_back(arr[ans]);
    for(int i=ans;i<arr.size();i++){
        if(arr[i]!=arr[i+1]){
            arr1.push_back(arr[i+1]);
            return arr1;
        }
    }
    arr1.push_back(arr[ans]);
    return arr1;
}