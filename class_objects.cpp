#include<stdio.h>
#define MAX 100
#define EMPTY -1
int tree[MAX];
int size=0;
void initTree(){
    for(int i=0;i<MAX;i++)
        tree[i]=EMPTY;
    size=0;
}
void insertRoot(int value){
    tree[0]=value;
    size=1; 
}