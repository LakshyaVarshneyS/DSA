#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>&arr);
int main()
    vector<int>arr = {12,13,14,15,16};
    bool issor = isSorted(arr);
    cout << (issor == 0 ? "no" : "yes") << endl;

}
bool isSorted(vector<int>&arr){
    int first= 0;
    int second = 1;
    for(int i=0;i<(arr.size()-2);i++){
        if(arr[first]<=arr[second]){
            first++;
            second++;
        }
        else{
            return 0;
        }
    }
    return 1;
}
