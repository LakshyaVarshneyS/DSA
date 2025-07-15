#include<iostream>
#include<vector>

using namespace std;

int appear_once(vector<int>&arr){
    int xor1 = 0;
    for(int i =0 ;i<arr.size();i++){
        xor1 = xor1^arr[i];
    }
    if(xor1!=0){
        
        return xor1;
    }
    else{
        return -1;
    }

}
int main(){
    vector<int>arr = {2,2,3,6,6,7,7};
    int a = appear_once(arr);
    cout<<a;

}
