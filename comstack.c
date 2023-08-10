#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

//complex number structure
typedef struct comstack
{
    int real, img;
}comstack;

//global values declaration
#define size 100
int top=-1;

//stack declaration
comstack stack[size];

//push in stack
void push(comstack value)
{
    if(top== size-1)
    {
        printf("Stack overflow");
        return;
    }
    top++;
    stack[top]=value;
}

//pop from stack
comstack pop()
{
    if(top==-1){
        comstack emptystack = {0.0,0.0};
        printf("Stack underflow");
        return emptystack;
    }
    comstack pop_value = stack[top];
    top--;
    return pop_value;
}

//main function
int main(){
    comstack value;
    printf("the Stack is Empty By default\n");
    int num;
    printf("Enter the size of stack : ");
    scanf("%d",&num);
    printf("Enter complex numbers \n");
    for (int i = 0; i < num; i++) {
        printf("Real : ");
        scanf("%d",&value.real);
        printf("Img : ");
        scanf("%d", &value.img);
        push(value);
    }
    printf("Pop Complex Numbers : \n");
    while (top!=-1) {
        comstack pop_Value = pop();
        printf("(%d + %di)\n", pop_Value.real,pop_Value.img);
    }
    return 0;
}
