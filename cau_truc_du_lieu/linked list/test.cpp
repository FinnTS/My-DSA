#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

typedef struct  Node* node;

node makenode(int x){
    node tmp = new Node(); // cấp phát bộ nhớ
    tmp -> data = x;
    tmp -> next = NULL;
    return tmp;
}


void insertfirt(node &a, int x){
    node tmp = makenode(x);
    if(a == NULL){
        a = tmp;
    }
    else{
        tmp -> next = a;
        a = tmp;
    }
}

void insertlast (node &a, int x){
    node tmp = makenode(x);
    if(a == NULL){
        a = tmp;
    }
    else{
        while(a -> next != NULL){
            tmp = tmp -> next;
        }
        tmp -> next = tmp;
    }
}


int main(){


}