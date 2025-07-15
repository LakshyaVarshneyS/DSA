#include<bits/stdc++.h>
using namespace std;
void print_arr(vector<int>&arr);
void zeros_to_end(vector<int>&arr);

//If order doesn't matter, your code is fine. 
//If order matters, you need to change the logic.

// this is the mark of a non stable algorithm as it is not preserving the reletive order


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
    int jcount = arr.size()-1;
    for(int i = 0; i<=jcount;i++){
        if(arr[i]==0){
            swap(arr[i], arr[jcount]);
            jcount--;
        }
    }
}