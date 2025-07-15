#include<bits/stdc++.h>
#include<utility>
using namespace std;

class Node{
    public:
        int data;
        Node*previous;
        Node*next;
    public:
        Node(int data){
            this->data = data;
            previous = nullptr;
            next = nullptr;
        }
};

pair<Node*,Node*> arrtoDLL(vector<int>arr){
    Node*head = new Node(arr[0]);
    Node*curr = head;
    Node*prev = head;
    if(arr.empty()){
        return {nullptr,nullptr};
    }

    for(int i = 1; i<arr.size();i++){
        Node*temp = new Node(arr[i]);
        curr = temp;
        curr->previous = prev;
        prev->next = curr;
        prev=curr;
    }
    return{head,curr};
}
void printDLL(pair<Node*,Node*>Initials,bool choice){
    if(!choice){
        Node*head = Initials.first;
        Node*curr =head;
        if(head==nullptr){
           return;
        }
        cout<<"forward\n";
        while(curr!=nullptr){
            cout<<curr->data<<" ";
            curr = curr->next;
        }
    }
    else{
        Node*tail = Initials.second;
        Node*curr = tail;
        if(tail==nullptr){
           return;
        }
        cout<<"reverse\n";
        while(curr!=nullptr){
            cout<<curr->data<<" ";
            curr = curr->previous;
        
        }
    }
    cout<<endl;
}
//deletion of head
pair<Node*,Node*>delHead(pair<Node*,Node*>Initials){
    Node*head = Initials.first;
    Node*curr = head;
    head = curr->next;
    head->previous = nullptr;
    Initials.first = head;
    delete curr;
    return Initials;

}
// deletion of tail
pair<Node*,Node*>delTail(pair<Node*,Node*>Initials){
    Node*tail = Initials.second;
    Node*curr = tail;
    tail = curr->previous;
    tail->next = nullptr;
    Initials.second = tail;
    delete curr;
    return Initials;

}
//deletion of element K
pair<Node*,Node*>del_k(pair<Node*,Node*>Initials,int k){
    if(k==1){
        Initials = delHead(Initials);
        return Initials;
    }
    else{
        Node*curr= Initials.first;
        int count=1;
        while(curr!=nullptr){
            if(count==k){
                if(curr->next==nullptr){
                    Initials  = delTail(Initials);
                    return Initials;
                }
                Node*prev = curr->previous;
                Node*next = curr->next;
                prev->next = next;
                next->previous = prev;
                delete curr;
                return Initials;
            }
            curr = curr->next;
            count++;
        }
        
    }
}
int main(){
    vector<int>arr = {12,1,23,12,14,13,12,23};
    pair<Node*,Node*>Initials = arrtoDLL(arr);
    printDLL(Initials,0);
    printDLL(Initials,1);
    Initials = delHead(Initials);
    printDLL(Initials,0);
    Initials = delTail(Initials);
    printDLL(Initials,0);
    Initials = del_k(Initials,3);
    printDLL(Initials,0);
    
    

}