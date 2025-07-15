#include<iostream>
#include<vector>

using namespace std;

void print_arr(vector<int>&arr);
int linear_search(vector<int>&arr,int f);


int main(){
    vector<int> arr = {13,0,17,0,20,12};
    int a = linear_search(arr,23);
    cout<<a<<endl;
}
int linear_search(vector<int>&arr,int f){
    for(int i=0; i<arr.size();i++){
        if(arr[i]==f){
            return i;
        }
    }
    return -1;
}
