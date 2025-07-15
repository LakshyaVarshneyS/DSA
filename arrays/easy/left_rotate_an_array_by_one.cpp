#include<iostream>
#include<vector>
using namespace std;
void left_rotate_array(vector<int>&arr);
void print_arr(vector<int>&arr);

int main(){
    vector<int> arr = {12,13,13,14,15,15,17,18,19,19,21,21};
    left_rotate_array(arr);
    print_arr(arr);

}
void print_arr(vector<int>&arr){
    for(int i=0;i<=arr.size()-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void left_rotate_array(vector<int>&arr){
    int temp = arr[0];
    for(int i=1;i<arr.size();i++){
        arr[i-1]=arr[i];
    }
    arr.back()= temp;
}

  