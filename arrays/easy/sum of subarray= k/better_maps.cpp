#include<iostream>
#include<vector>
#include<map>

using namespace std;

#include<iostream>
#include<vector>

using namespace std;

void print_arr(vector<int>&arr);
int sum_is_equal_k(vector<int>&arr, int k);

int main(){
    vector<int> arr = {1,3,4,34,54,234,45};
    int k= 42;
    int sum = sum_is_equal_k(arr,k);
    cout<<sum<<endl;
}
void print_arr(vector<int>&arr){
    for(int i=0;i<=arr.size()-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int sum_is_equal_k(vector<int>&arr,int k){
    map<long long int,int> mapped;
    long long int sum = 0;
    int maxlen = 0;
    for(int  i= 0; i<arr.size(); i++){
        sum = arr[i];
        mapped[arr[i]]++;

    }
    return maxlen;

}