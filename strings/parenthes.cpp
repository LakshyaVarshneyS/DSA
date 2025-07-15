#include<iostream>
#include<string>

using namespace std;
string modString(string s);
int main(){
    string s = "";
    string q= modString(s); 
}
string modString(string s){
    int start = 0;
    for(int i = 0; i<s.length();i++){
        if(s[i]=='('&& s[i+1]==')'){
            cout<<s[i]<<s[i+1];
        }
    }
}