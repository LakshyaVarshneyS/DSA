#include<iostream>
#include<vector>

using namespace std;

void print_arr(vector<int>&arr);
vector<int> sum_is_equal_k(vector<int>&arr, int k);

int main(){
    vector<int> arr = {1,3,4,34,54,234,45};
    int k= 42;
    vector<int> sum = sum_is_equal_k(arr,k);
    print_arr(sum);
}
void print_arr(vector<int>&arr){
    for(int i=0;i<=arr.size()-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
vector<int> sum_is_equal_k(vector<int>&arr,int k){
        vector<int>subarr;
        for(int i=0; i<arr.size();i++){
            int sum = arr[i];
            if(k==arr[i]){
                subarr.push_back(arr[i]);
                return subarr;
            }
            for(int j = i+1; j<arr.size();j++){
                sum = sum + arr[j];
                if(sum>k){
                    break;
                }
                else if(sum==k){
                    for(int idx =i ; idx<=j; idx++){
                        subarr.push_back(arr[idx]);
                    }
                    return subarr;    
                }
            

            }
        }
        subarr.push_back(-1);
        return subarr;
}
