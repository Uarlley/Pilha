#include "stack.h"

stack* createList(){
    stack* pilha = NULL;
    pilha = (stack *)malloc(sizeof(stack));
    if(pilha==NULL) return pilha;
    pilha->head = NULL;
    pilha->size = 0;
    return pilha;
}
node* createNode(int value){
    node* newnode = NULL;
    newnode = (node *)malloc(sizeof(node));
    if(newnode==NULL) return NULL;
    newnode->info  = value;
    newnode->next = NULL;
    return newnode;
}
void push(stack** pilha,int value){
    node* newnode = NULL;
    newnode = createNode(value);
    if(newnode==NULL) return;
    if(*pilha==NULL) (*pilha) = createList();
    newnode->next = (*pilha)->head;
    (*pilha)->head = newnode;
    (*pilha)->size++;
    return;
}

int main(){
    stack* pilha;

}