#include<iostream>
#include<map>
using namespace std;
int main(){
    int arr[7] = {23,45,46,34,2,45,452};
    map<int,int>mapd;

    for(int i =0; i<7;i++){
        mapd[arr[i]]++;
    }

    cout<<"23--->"<<mapd[23]<<"\n45--->"<<mapd[45];

}