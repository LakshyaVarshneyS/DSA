#include<iostream>
#include<map>

using namespace std;

int main(){
    int arr[100] = {};
    for(int i = 0; i < 100; ++i) {
        arr[i] = (i % 60) + 1;
    }
    
    map<int,int>meow;
    for(int i= 0; i<100; i++){
        meow[arr[i]]++;
    }
    for(auto it:meow){
        cout<<it.first<<"--->"<<it.second<<endl;
    }
}
