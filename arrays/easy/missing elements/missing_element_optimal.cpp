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
    int n = arr.size();
    int sum1 = (n*(n+1))/2;
    int sum2 =0;
    for(int i =0;i<arr.size();i++){
        sum2=sum2+arr[i];
    }
    return(sum1-sum2);

} 