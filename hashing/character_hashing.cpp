#include<iostream>

using namespace std;
string character_hash(string s,string q);

int main(){
    string s = "abcbdearffzzzzzz";
    int n =s.size();
    int hash[26]={0};
    int ch = 'a';
    for(int i=0;i<n;i++){
        int a = s[i];
        hash[s[i]-ch]++;
    }
    // cout<<hash[25];
    string cv = character_hash("udit","udi123t");
    cout<<cv;
}
string character_hash(string s,string q){
    int hash[256] ={0};
    string sr;
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    for(int i =0;i<q.size();i++){
        if(i!=(q.size()-1)){
             sr =sr+ to_string(hash[q[i]]) + ",";

        }
        else{
            sr =sr+ to_string(hash[q[i]]);
        }


    }
    return sr;
    
}