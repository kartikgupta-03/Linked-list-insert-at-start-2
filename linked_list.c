#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = 0 ;
struct node *createnode(){
    struct node *h;
    h = (struct node*)malloc(sizeof(struct node));
    printf("Enter data : \n");
    scanf("%d", &h->data);
    h->next = 0;
    return h;

}
void insertstart(){
    struct node *k1;
    k1 = createnode();
    if(start == 0){
        start = k1;
    }
    else{
        k1->next = start;
        start = k1;

    }
}
void display(){
    struct node *j;
    j = start;
    while(j!=0){
        printf("%d ", j->data);
        j = j->next;
    }
}
int main(){
    int i ,n ; 
    printf("Enter the data : \n");
    scanf("%d", &n);
    for(i=0 ; i<n ; i++){
        insertstart();
    }
    display();
    return 0;
}
