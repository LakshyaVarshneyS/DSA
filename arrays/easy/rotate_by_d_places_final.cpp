#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void left_rotate_array(vector<int>&arr,int d);
void print_arr(vector<int>&arr);

int main(){
    vector<int> arr = {13,14,17,18,20,12};
    left_rotate_array(arr,1);
    print_arr(arr);

}

void print_arr(vector<int>&arr){
    for(int i=0;i<=arr.size()-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void left_rotate_array(vector<int>&arr,int d){
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
}