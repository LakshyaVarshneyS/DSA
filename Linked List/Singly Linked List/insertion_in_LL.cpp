#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node*next;
    public:
        Node(int data ){
            this->data = data;
            next = nullptr;
        }
};

// conversion of array to the linkedlist
Node* arrtoLL(vector<int>arr){
    Node  *head = new Node(arr[0]);
    Node *mover = head;
    for(int i = 1;i<arr.size();i++){
        Node* y  = new Node(arr[i]);
        Node*temp = y;
        mover->next = temp;
        mover = temp;

    }
    return head;
}

void printLL(Node*head){
    Node*currNode = head;
    while(currNode!=nullptr){
        cout<<currNode->data<<" ";
        currNode = currNode->next;
    }
}
// insertion at head
Node* insert_head(int data,Node*head){
    Node*temp = new Node(data);
    temp->next = head;
    head = temp;
    return head;
    
}
// insert at tail
Node* insert_tail(int data,Node*head){
    Node*temp = new Node(data);
    if(head==nullptr){
        head = temp;
        return head;
    }
    Node*curr = head;
    while(curr->next!=nullptr){
        curr = curr->next;
    }
    curr->next=temp;
    return head;

}
//insert at any position x;
Node* insert_at_k(int data, int k, Node*head){
    Node*temp = new Node(data);
    Node*curr = head;
    Node*prev = head;
    if(k==1){//head case
        temp->next = head;
        head  = temp;
        return head;
    }
    else{
        int count= 0;
        while(curr!=nullptr){
            count++;
            if(k==count&&curr->next!=nullptr){
                prev->next = temp; 
                temp->next = curr;
            }
            if(k==count&&curr->next==nullptr){
                curr->next = temp;
            }

            prev = curr;
            curr = curr->next;
        }
        return head;
    }
}
Node*Before_val(int data,int val,Node*head){
    Node*temp = new Node(data);
    Node*curr = head;
    Node*prev = head;

    if(curr->data==val){
        temp->next = head;
        head  = temp;
        return head;
    }
    else{
        int count= 0;
        while(curr!=nullptr){
            count++;
            if(curr->data==val&&curr->next!=nullptr){
                prev->next = temp; 
                temp->next = curr;
            }
            if(curr->data==val&&curr->next==nullptr){
                curr->next = temp;
            }

            prev = curr;
            curr = curr->next;
        }
        return head;        
    }
}

int main(){
    vector<int> arr= {5,6,7,8,9,12,3,2,45};
    Node*head = arrtoLL(arr);
    printLL(head);
    cout<<endl;
    // printLL(insert_head(234,head));
    cout<<endl;
    // printLL(insert_tail(34,head));
    cout<<endl;
    printLL(insert_at_k(244,9,head));

}