#include<iostream>
using namespace std;
struct node{
    int data;
    Node *left,*right;
}
Node* newNode(int value)
{
    Node* n=new Node;
    n->data=value;
    
}