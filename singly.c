#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*text;
};
void create(){
    struct node *newnode=(struct node*)
    malloc(sizeof(struct node));
    int value;
    printf("enter thr data: ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
        head=tail=newcode;
    }
    else{
        tail->next=newcode;
        tail=newcode;
    }
}