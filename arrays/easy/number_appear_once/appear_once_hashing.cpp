#include<iostream>
#include<vector>

using namespace std;

int appear_once(vector<int>arr);

int main(){
    vector<int>arr = {0,0,1,1,-1,5,5,6,6};
    int a = appear_once(arr);
    cout<<a;
}
int appear_once(vector<int>arr){
    int hash[100000] = {0};
    for(int i=0;i<arr.size();i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<100000;i++){
        if(hash[i]==1){
            return i;
        }
        else{
            return -404;
        }


    }
}
