#include<iostream>
#include<vector>

using namespace std;

void print_arr(vector<int>&arr);
int missing_elements(vector<int>&arr);

int main(){
    vector<int> arr= {0,1,2,3,4,5,6,8,9,10,11,12};
    int miss = missing_elements(arr);
    cout<<miss;
}

int missing_elements(vector<int>&arr){
  int n =arr.size();
  int xor1 =0;
  int xor2 = 0;
  for(int i = 0; i<=n; i++){
    xor1 = xor1^i;
  }
  for(int i=0;i<arr.size();i++){
    xor2 = xor2^arr[i];
  }
  
  return(xor1^xor2);
} 