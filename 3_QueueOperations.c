//C program to implement basic operations like Traverse, Push, Pop, Reset in a Queue Data Structure using Array..
//Added Headerfiles;
#include<stdio.h>
#include<stdlib.h>//for exit;

//Defined 5 as maximum size of the Queue;
#define max 5

//Declaring global variables;
int Queue[max], choice, element, top=0;

//Declaring functions to be used;
void StartMenu();
void PrintQueue();
void Push();
void Pop();
void ResetQueue();

//Main function;
int main(){
    StartMenu();
    return 0;
}

//Defining StartMenu;
void StartMenu(){
    while(1){
        printf("\n[<<< HERE IS A QUEUE OF SIZE %d >>>]\nTHE CURRENT QUEUE IS: ", max);
        PrintQueue();//Printing Queue everytime after an operation;
        printf("\n1.PUSH\n2.POP\n3.RESET QUEUE\n4.EXIT PROGRAM\n");
        printf("\nPLEASE ENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        printf("\n----<<< CHOICE ENTERED >>>----\n");

        switch(choice){
            case 1:
            Push();
            break;
            case 2:
            Pop();
            break;
            case 3:
            ResetQueue();
            break;
            case 4:
            printf("\n[---<<< PROGRAM ELIMINATED >>>---]\n");
            exit(0);
            break;
            default:
            printf("\n!---<<< INVALID CHOICE >>>---!\n");
        }
    }
}
//Defining PrintQueue to Print the current queue;
void PrintQueue(){
    printf(" [");
    for(int i=0; i<max; i++){
        if(i>0){
            printf("|");
        }
        printf(" %d ", Queue[i]);
    }
    printf("]\n");
}
//Defining Push function;
void Push(){
    if(top < max){
        printf("\nPlease enter the element to push: ");
        scanf("%d", &element);
        Queue[top] = element;
        top++;
        printf("\n[ELEMENT %d PUSHED AT THE TOP(%d)]\n", element, top);//Push massage;
    }else{
        printf("\n!---<<< THE QUEUE IS FULL >>---!\n");//Queue overflow;
    }
}
//Defining Pull function;
void Pop(){
    if(top>0){
        printf("\n[ELEMENT %d POPED FROM THE TOP POSITION(%d)]\n", Queue[top-1], top);//Pop massage;
        Queue[top-1] = 0;
        top--;
    }else{
        printf("\n!---<<< THE QUEUE IS EMPTY >>>---!\n");//Queue underflow;
    }
}
//Defining ResetQueue function;
void ResetQueue(){
    for(int i=0; i<top; i++){
        Queue[i] = 0;
    }
    printf("\n---<<< QUEUE RESET >>>---\n");//Reset massage;
}