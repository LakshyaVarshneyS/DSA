#include<iostream>
#include<string>

using namespace std;

int main(){
    string s = "the sky is blue";
    cout<<'"'<<s<<'"'<<endl;
    while(s.length() > 0 && s[0]==' '){
            /* code */
        s.erase(0,1);
            
    }
    while(s.length() > 0 && s[s.length()-1]==' '){
        s.erase(s.length()-1, 1);
    }
    cout<<'"'<<s<<'"'<<endl;
}
