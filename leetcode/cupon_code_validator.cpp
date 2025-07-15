#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive);

int main(){
    vector<string> code = {"SAVE20","PHARMA5","SAVEaa20"};
    vector<string> businessLine  = {"restaurant","grocery","pharmacy","restaurant"};
    vector<bool> isActive = {true,true,true,true};
    vector<string>validate = validateCoupons(code,businessLine,isActive);
    for(int i=0;i<validate.size();i++){
        cout<<validate[i]<<" ";
    }
}
vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive){
    vector<string> validateCoupons;
    for(int i = 0;i<code.size();i++){
            string s = code[i];
            bool isrej = false;
            for(int j=0;j<s.length();j++){
                if(isalnum(s[j])){
                    continue;
                }
                else{
                    isrej =true;
                    break;
                }
            }
            if(isrej==0){
                if((businessLine[i]=="electronics"||businessLine[i]=="grocery"||businessLine[i]=="pharmacy"||businessLine[i]=="restaurant")&&(isActive[i]==true)){
                    validateCoupons.push_back(code[i]);
                }
            }
    }
    sort(validateCoupons.begin(),validateCoupons.end());
    return validateCoupons;
}