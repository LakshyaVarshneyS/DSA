#include<bits/stdc++.h>
using namespace std;
void print_arr(vector<int>&arr);
void zeros_to_end(vector<int>&arr);

int main(){
    vector<int> arr = {13,0,17,0,20,12};
    zeros_to_end(arr);
    print_arr(arr);

}

void print_arr(vector<int>&arr){
    for(int i=0;i<=arr.size()-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void zeros_to_end(vector<int>&arr){
    int zeros =0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            arr.erase(arr.begin()+i);
            zeros++;
        }
    }
    for(int i = 0;i<zeros;i++){
        arr.push_back(0);
    }
}
