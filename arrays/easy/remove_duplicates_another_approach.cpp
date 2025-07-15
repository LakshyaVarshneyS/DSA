#include<iostream>
#include<vector>
using namespace std;
int remove_duplicates(vector<int>&arr);
void print_arr(vector<int>&arr,int n);

int main(){
    vector<int> arr = {12,13,13,14,15,15,17,18,19,19,21,21};
    int fine = remove_duplicates(arr);
    print_arr(arr,fine);

}
void print_arr(vector<int>&arr,int fine){
    for(int i=0;i<=fine; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int remove_duplicates(vector<int>&arr){
    int i = 0;
    for(int j=1; j<arr.size();j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i;
}
