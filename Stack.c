#include <stdio.h>
int Stack[100], choice, n, top= -1, x, i;
void push();
void pop();
void peek();
void Display();
int main()
{
    printf("\n Enter the Size of Stack[max00]:");
    scanf("%d", &n);
    printf("\n \t Stack Operations Using Array");
    printf("\n \t 1.Push\n\t 2.Pop\n\t 3.peek \n \t 4. Display \n \t 5.Exit");
    do
    {
        printf("\n Enter the Choice (1-5):");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            Display();
            break;
            case 5:
            printf("Existing");
            break;
            default:
            printf("Please Enter Valid  choice(1\2\3\4\5)");
        }
    }
    while (choice !=5);
    return 0;
}
void push()
{
    if(top<=n-1)
    {
        printf("Enter the value to push:");
        scanf ("%d", &x);
        top++;
        Stack [top]=x;
    }
}
void pop()
{
    if (top<=-1)
    {
        printf("\n\t Stack is underflow");
    }
    else
{
    printf("\n \t The Poped element is %d",Stack[top]);
    top--;
}
}
void peek()
{
    if(top>=0)
    {
        printf("\n\t Top element is %d",Stack[top]);
    }
    else
    {
        printf("\n\t Stack is empty");
    }
}
void Display()
{
    if(top>=0)
    {
        printf("\n The element in Stack are:\n");
        for(i=top;i>=0;i--)
        printf("%d \n",Stack[i]);
}
    else
{
    printf("\n The Stack is Empty");
}
}
