#include<bits/stdc++.h>

using namespace std;

struct Node{

    public:
        int data;
        Node* next;
    public:
        Node(int data, Node* next){
            this->data = data;
            this->next = next;
        }
        Node(int data){
            this->data = data;
            next = nullptr;
        }

};
int main(){
    vector<int> arr = {3,4,5,5};
    Node x = Node(23);
    Node*y = &x;
    Node z = Node(arr[1],y);
    cout<<y<<endl<<x.next<<endl<<&z<<endl;
    y->next = &z;
    cout<<y->next;

}
