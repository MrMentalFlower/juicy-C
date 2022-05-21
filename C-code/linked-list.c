#include<stdlib.h>
#include <stdio.h>

//the node to be defined for linked list
struct Node{
  int data;            //data type that determines what data will be insereted like numbers or chars
  struct Node* next;   //stores the address of the next node
};

struct Node* head;                //stores the address of the first node in the linked list also known as the head node

//inserts a piece of data into the linked list
void Insert(int x){
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); //creates a node using malloc that points to node and sets temp to be that location data
  temp->data = x;                                                //sets the field for data in node to x which is what the user inputs
  temp->next = head;//
                    //since head is null then you don't need to redefine that and can just use temp->next = head
  head = temp;
}

void Print(){
  struct Node* temp = head;
  printf("List is: ");
  while(temp != NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main(){
  head = NULL;                  //pointer variable points to null and is the entry point of the program
  printf("How many numbers?\n");
  int n,i,x;
  scanf("%d",&n);               //user input for the number of items in the linked list
  for(i = 0;i<n;i++){
    printf("enter the number\n");
    scanf("%d",&x);             //user input for the data in each part of the linked list
    Insert(x);
    Print();
  }

}
