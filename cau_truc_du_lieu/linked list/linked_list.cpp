#include <iostream>

using namespace std;
struct Node{
    int data;
    Node *next;
};

typedef struct Node* node;

// cap phat dong bang node voi so nguyen

node makenode(int x){
    node tmp = new Node();
    tmp -> data = x;
    tmp -> next = NULL;
    return tmp;
}

bool empty(node a){
    return a == NULL;
}


// size()
int Size(node a){
    int cnt;
    while( a != NULL){
        ++cnt;
        a = a -> next; // gan dia chỉ cho node tiep theo
    }
    return cnt;
}

void Insertfirt(node &a, int x){
    node tmp = makenode(x);
    if(a == NULL){
        a = tmp;
    }
    else{
        tmp -> next = a ;
        a = tmp;
    }
}

void xuat(node a){
    while( a != NULL){
        cout << a -> data << " -> ";
        a = a -> next;
    }
    cout << "NULL\n";
}

void nhapvaocuoi(node &a, int x){
    node tmp = makenode(x);
    if(a == NULL){
        a = tmp;
    }
    else{
        while(a-> next != NULL){
            tmp = tmp -> next;
        }
        tmp -> next = tmp;
    }
}

int main(){
  node head = NULL;
    Insertfirt(head, 10);
    Insertfirt(head, 100);
    Insertfirt(head, 1000);
    xuat(head);
}