#include<iostream>
#include<vector>
using namespace std;
void remove_duplicates(vector<int>&arr);
void print_arr(vector<int>&arr);

int main(){
    vector<int> arr = {12,13,13,14,15,15,17,18,19,19,21,21};
    remove_duplicates(arr);
    print_arr(arr);

}
void print_arr(vector<int>&arr){
    for(int i=0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void remove_duplicates(vector<int>&arr){
    for(int i =0 ;i<arr.size()-1;i++){
        if(arr[i]==arr[i+1]){
            arr.erase(arr.begin() + i+1);
        }
    }
}