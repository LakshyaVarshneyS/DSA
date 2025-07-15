#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = nullptr;
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

// printing of the linked list
void printLL(Node*head){
    Node*currNode = head;
    while(currNode!=nullptr){
        cout<<currNode->data<<" ";
        currNode = currNode->next;
    }
}
//length of a linkedList
int lengthofLL(Node*head){
    if(head==nullptr){
        return 0;
    }
    else{
        Node*currNode = head;
        int count=1;
        while(currNode!=nullptr){
            currNode = currNode->next;
            count++;
        }
        return count;
    } 
}

//search an element in an linked list
int search(Node*head,int target){
    Node*currNode = head;
    int count=0;
    while(currNode!=nullptr){
            count++;
        if(currNode->data==target){
            return count;
        }
        else{
            currNode = currNode->next;
        }
    }
    return -1;
}
// deleteing a node in a linked list
Node* delEle(Node*head,int elementNo){
    Node*currNode = head;
    Node*prevNode = head;
    
    if(elementNo==1){
        head = currNode->next;
        prevNode->next =nullptr;
        delete currNode;
    }
    else{
        int count=0;
        while(currNode!=nullptr){
            count++;
            if(count==elementNo&&elementNo!=1){
                prevNode->next = currNode->next;
                currNode->next=nullptr;
                delete currNode;
                break;
    
            }
            prevNode = currNode;
            currNode = currNode->next;

        
        }
        return head;
    }
}
int main(){
    vector<int> arr= {5,6,7,8,9,12,3,2,45};
    Node*head = arrtoLL(arr);
    printLL(head);
    int leng = lengthofLL(head);
    cout<<endl<<leng-1;
    int find = search(head,6);
    cout<<endl<<find;
    Node*newHead = delEle(head,23);
    cout<<endl;
    printLL(newHead);
}