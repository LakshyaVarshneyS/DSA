#include <bits/stdc++.h>

using namespace std;

int search_inserted(vector<int>&arr,int m);

int main(){
    vector<int>arr ={1,2,3,4,5,7,8,9,10};
    cout<<search_inserted(arr,23);
}
int search_inserted(vector<int>&arr,int m){
    int first= 0;
    int last = arr.size()-1;
    int ans = arr.size();
    while(last>=first){
        int mid = (last+first)/2;
        if(arr[mid]>=m){
            int ans = mid;
            last=mid-1;
        }
        else{
            first= mid+1;
        }
    }
    return ans ;
}



