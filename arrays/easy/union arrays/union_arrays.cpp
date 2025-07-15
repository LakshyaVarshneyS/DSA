#include<bits/stdc++.h>
using namespace std;
void print_arr(vector<int>&arr);
vector<int> union_arr(vector<int>&arr1, vector<int>&arr2);


int main(){
    vector<int> arr1 = {0,12,45,57,435,2364};
    vector<int> arr2 = {0,12,34,64,435,7657,5626};
    vector<int>uni =union_arr(arr1,arr2);
    print_arr(uni);

}

void print_arr(vector<int>&arr){
    for(int i=0;i<=arr.size()-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
vector<int> union_arr(vector<int>&arr1, vector<int>&arr2){
    int hash[100000] ={0};
    vector<int>uni ={};

    for(int i =0; i<arr1.size();i++){
        hash[arr1[i]]++;
    }
    for(int i = 0; i<arr2.size();i++){
        hash[arr2[i]]++;
    }
    for(int i =0; i<100000;i++){
        if(hash[i]>0){
            uni.push_back(i);
        }
    }
    return uni;

}
