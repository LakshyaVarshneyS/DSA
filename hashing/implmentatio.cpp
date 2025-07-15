#include<iostream>
#include<hashtable.h>

using namespace std;

int main(){
    cout<<"Enter the size of the array:";
    int n;cin>>n;
    int arr[n];
    cout<<endl<<"enter the elements smaller then 12"<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hash[12] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+1;
    }

    cout<<"enter the no of elments of which you want to know frequency::";
    int q;
    cin>>q;

    

    
}