#include<iostream>
#include<string>

using namespace std;

string revrseStr(string s);

int main(){
    string s = "the sky is blue";
    string n = revrseStr(s);
    cout<<n;
}

string revrseStr(string s){

    while(s.length() > 0 && s[0]==' '){
        s.erase(0,1);     
    }
    while(s.length() > 0 && s[s.length()-1]==' '){
        s.erase(s.length()-1, 1);
    }
     for (int i = 1; i < s.length();) {
            if (s[i] == ' ' && s[i - 1] == ' ') {
                s.erase(i, 1); // remove the extra space
            } else {
                i++;
            }
    }
    int end = s.length()-1;
    int previous = end;
    string n;
    while(end>=0){
        while(s[end]!=' '&&end>=0){
                end--;
        }
        for(int i =end+1; i<=previous;i++){
            n.push_back(s[i]);
        }
        if(end>0){
            n.push_back(' ');
        }
        previous = end-1;
        end =previous;
    }
    return n;

}