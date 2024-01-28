// C Program to show basic stack operations like push, pop, reset stack..
#include<stdio.h>
//Defining max as 5;
#define max 5

//Declaration of Global Variables
int StackArray[max], top = 0, element;

//Declaring functions
void startMenu();
void printStack();
void push();
void pop();
void resetStack();

//main function;
int main(){
    startMenu();
    return 0;
}
//Defining the declared functions..
//Defining startMenu function to start the interractive menu with choice options;
void startMenu(){
    int choice;  //to store user's choice;
    int exit = 1;//loop will run till the exit value will be 1, after changed to 0 the loop will stop runnig;
    while(exit){
        printf("\n[Here is an Stack of size 5]\n");//Starting menu..
        printStack();  //Always show the current Stack before asking the choise..
        printf("1.PUSH ELEMENT\n2.POP ELEMENT\n3.RESET STACK\n4.EXIT PROGRAM\n--->>Please enter Opeartion no.: ");//Choise options and asking for choise;
        scanf("%d", &choice); //Storing choise;
        printf("\n----<<CHOICE ENTERED>>----\n");
        if(choice == 4){  //To exit the program if the choise will be 4(exit);
            printf("\n--<<<<PROGRAM ELIMINATED..>>>>--\n   ||----<<THANK  YOU>>----||\n");
            exit=0;  //Changing exit value to 0 to stop the Menu loop;
        }else{       //If choise is not 4(exit) then else will run;
            switch(choice){      //Switch to call function according to the users choise;
                case 1:
                push();
                break;
                case 2:
                pop();
                break;
                case 3:
                resetStack();
                break;
                default:
                printf("\n<<INVALID CHOICE..>>\n");
                break;
            }
        }
    }
}
//Defining the printStack() Function to Print current Stack;
void printStack() {
    printf("Current Stack is:--\n");
    for (int i = max-1; i >= 0; i--){
        printf("                   |%d|\n", StackArray[i]);
    }
}
//Defining the push() Function to PUSH an element on top of the Stack;
void push(){
    if(top<max){
        printf("Please enter the Element to PUSH in Stack: ");
        scanf("%d", &element);
        StackArray[top] = element;
        top++;
        printf("\n----<<ELEMENT(%d) PUSHED at Top Position(%d)>>\n", element, top);
    }else{
        printf("\n----<<THE STACK IS FULL>>----\n");  //if the Stack will be full;
    }
}
//Defining the pop() Function to POP an element from the top of the Stack;
void pop(){
    if(top>0){
        printf("\n----<<LAST ELEMENT(%d) POPED from Top Position(%d)>>----\n", StackArray[top-1], top);
        StackArray[top-1] = 0;
        top--;
    }else{
        printf("\n----<<THE STACK IS EMPTY>>----\n");  //if the Stack will be empty;
    }
}
//Defining the resetStack() Function to RESET the full Stack;
void resetStack(){
    for(int i=0; i<max; i++){
        StackArray[i] = 0;
    }
    top = 0;
    printf("\n----<<ARRAY RESET>>----\n");
}
