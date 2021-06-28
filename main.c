#include <stdio.h>g
#define ARRAY_SIZE 10

int array[ARRAY_SIZE];
int top = -1;

int push(int data)
{
    if(top + 1 >= ARRAY_SIZE)
    {
        printf("\nStack overflow....");
        return top;
    }
    array[top+1] = data;
    top++;
    return top;
}

int pop()
{
    if(top - 1 < -1)
    {
        printf("Stack is empty");
        return top;
    }
    array[top] = -1;
    top--;
    return top;
}

int peek()
{
    return top;
}

void printStack()
{
    for(int i = top; i >= 0; i--)
    {
        if(i == top)
        {
            printf("\n %d ==> Top", array[i]);
        }
        else
        {
            printf("\n %d", array[i]);
        }
    }
}

int main() {

}
