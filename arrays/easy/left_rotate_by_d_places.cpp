#include<iostream>
#include<vector>

using namespace std;

void left_rotate_array(vector<int>&arr,int d);
void print_arr(vector<int>&arr);

int main(){
    vector<int> arr = {13,14,17,18,20,12};
    left_rotate_array(arr,6);
    print_arr(arr);

}

void print_arr(vector<int>&arr){
    for(int i=0;i<=arr.size()-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void left_rotate_array(vector<int>&arr,int d){
    vector<int> temp(arr.begin(), arr.begin()+d);
    for(int i = d; i<arr.size(); i++){
        arr[i-d] =arr[i];
    }
    for(int i=0;i<temp.size(); i++){
        arr[arr.size()+(i-d)] = temp[i];
    }
}