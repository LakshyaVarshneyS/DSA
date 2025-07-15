#include<bits/stdc++.h>
using namespace std;
void print_arr(vector<int>&arr);
vector<int> missing_elements(vector<int>&arr);


int main(){
    vector<int> arr= {0,1,3,4,5,6,7,10,12};
    vector<int> miss = missing_elements(arr);
    print_arr(miss);
}

void print_arr(vector<int>&arr){
    for(int i=0;i<=arr.size()-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
vector<int> missing_elements(vector<int>&arr){
    vector<int>miss={};
    int m = arr[0];
    for(int i=0;i<arr.size();i++){
        while(arr[i]!=m){
            miss.push_back(m);
            m++;
        }
        if(arr[i]==m){
            m++;
        }
        
    }
    return miss;
}
