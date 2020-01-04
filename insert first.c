#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head;
int main(){

    int i,num,total_number;
    struct node *temp,*new_node;
    printf("How many number want to insert in link list?: ");
    scanf("%d",&total_number);
    head = (struct node *)malloc(sizeof(struct node));
    for(i=1;i<=total_number;i++){
        printf("Enter %d number: ",i);
        scanf("%d",&num);
        new_node = (struct node *)malloc(sizeof(struct node));
        if(i==1){
            head->data = num;
            head->next = NULL;
        }else{
            new_node->data = num;
            new_node->next = head;
            head = new_node;
        }
    }

    printf("Your link list is: ");
    temp = head;
    while(temp != NULL){

        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("Yes every time number insert in the first place\n");

    return 0;

}
