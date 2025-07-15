#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {12,3,24,235,24,2334,34,23,25,512443};
    int max = arr[0];
    int index = 0;
    for(int i = 1; i<=arr.size()-1;i++){
        if(max<arr[i]){
            max=arr[i];
            index = i;
        }
    }
    cout<<max<<"::"<<index;


}