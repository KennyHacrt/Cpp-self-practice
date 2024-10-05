#include <iostream>
#include <cstring>
#include <unistd.h>
#include <iomanip>

using namespace std;
struct Node{
    int value;
    Node* next;
};
//create
//delete
//insert/add
//search
//print
void print(Node * head){
    Node * cur=head;
    while (cur!=NULL){
        cout<<cur->value<<endl;
        cur=cur->next;
    }
}
void insert_head(Node ** head,int newvalue){
    Node * newnode = new Node;
    newnode->next=*head;
    newnode->value=newvalue;
    *head=newnode;
}
void insert_end(Node * head,int newvalue){
    Node * newnode=new Node;
    Node * cur=head;
    while(cur->next!=NULL){
        cur=cur->next;
    }
    cur->next=newnode;
    newnode->value=newvalue;
}
// void delete_node_head(Node ** head){
//     Node *cur=*head;
//     *head=cur->next;
// }
void delete_node_r(Node ** head,int del_num){
    Node *cur=*head;
    Node *pre=*head;
    if (cur->value==del_num){
        *head=cur->next;
    }
    while(cur->next!=NULL){
        if (cur->value==del_num){
            pre->next=(cur->next);
        }
        pre=cur;
        cur=cur->next;
    }
}
void search_node(Node * head,int s_v){
    Node*cur=head;
    while(cur->next&&cur->value!=s_v){
        cur=cur->next;
    }
    if (cur->value==s_v){
        cout<<"found";
    }
    else{
        cout<<"N";
    }
}
int main(){
    Node a,b,c,d,*head;
    a.value=1;
    b.value=2;
    c.value=3;
    d.value=4;
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;
    head=&a;
    insert_head(&head,20);
    insert_head(&head,6);
    insert_end(head,10);
   
    delete_node_r(&head,2);
    print(head);
    search_node(head,2);
   return 0;
}
