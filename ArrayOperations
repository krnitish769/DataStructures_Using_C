//This program is about showing input,travarsal,insertion and deletion operations in an 1-D Array;
#include<stdio.h>

//Defining global variables;
int array[100], size;

//Function declarations;
void MainManu();
void Work(int choice);
void InputArray();
void PrintArray();
void InsertElement();
void DeleteElement();

//main function;
int main(){
    MainManu();
    return 0;
}

//Defining the declared functions;
//Function to start the main menu;
void MainManu(){
    int choice, exit=1;
    while(exit==1){
        printf("\n    ----MAIN MANU----\n");
        printf("1.INPUT ARRAY\n2.PRINT ARRAY\n3.INSERT ELEMENT\n4.DELETE ELEMENT\n5.EXIT PROGRAM\n");
    
        printf("\nPlease enter your choice: ");
        scanf("%d",&choice);
        printf("\n<<CHOICE ENTERED..>>\n\n");
        
        if(choice != 5){
            Work(choice);
        }else{
            exit=0;
            printf("\n<<----PROGRAM ELIMINATED---->>\n<<--------THANK YOU!-------->>\n\n\n");
        }
    }
}
//Function to implement choosen operation according to the input;
void Work(int choice){
    switch(choice){
        case 1:
        InputArray();
        break;
        case 2:
        PrintArray();
        break;
        case 3:
        InsertElement();
        break;
        case 4:
        DeleteElement();
        break;
        default:
        printf("INVALID CHOICE..");
        break;
    }
}
//Function to take array as input from the user;
void InputArray(){
    printf("Please enter the size of the array:");
    scanf("%d",&size);
    for(int i=0; i<size; i++){
        printf("Please enter the element no. %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\n<<INPUT TAKEN..>>\n\n");
}
//Function to print the current array elements;
void PrintArray(){
    printf("The array is: \n");
    printf("[");
    for(int i=0; i<size; i++){
        printf("%d",array[i]);
        if(i<size-1){
            printf(" ");
        }
    }
    printf("]\n");
}
//Function to insert an extra element at the desired place according to the user input;
void InsertElement(){    
    int newElement, index;
    printf("Please enter the element to insert: ");
    scanf("%d", &newElement);
    printf("Please enter the index number for the element: ");
    scanf("%d", &index);

    size++;
    for(int i=size; i>index; i--){
        array[i-1] = array[i-2];
    }
    array[index-1] = newElement;
}
//Function to delete an element from the array;
void DeleteElement(){
    int deletionPosition;
    printf("\nPlease enter the position of the element you want to delete from the current array: ");
    scanf("%d",&deletionPosition);
    int deletedItem = array[deletionPosition-1];

    for(int i=deletionPosition-1; i<size-1; i++){
        array[i] = array[i+1];
    }
    size--;
    printf("\nElement no. %d (%d) is deleted..\n",deletionPosition,deletedItem);
}
