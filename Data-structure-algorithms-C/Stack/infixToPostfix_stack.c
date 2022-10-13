#include <stdio.h>
#include <stdbool.h>

// 2+3*(2^2-1)^(3+1-2)-2

#define STACK_SIZE 20

char Stack[STACK_SIZE];
int top = -1;

void push(char c){
 Stack[++top] = c;
}

char pop(){
    return Stack[top--];
}

int Priority(char x){
    if(x == '(') return 0;
    else if(x == '+' || x == '-') return 1;
    else if(x == '*' || x == '/') return 2;
    else if(x == '^') return 3;
}

bool isOperand(char c){
    return (c >= 'a' && c<= 'z' ) || (c >= 'A' && c <= 'Z');
}

int main()
{
    char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
    char *e,x;
    e = exp;
    while(*e != '\0'){
        if(isOperand(*e))
        {
            printf("%c",*e);

        }
        else if(*e == '(')
            push(*e);
        else if(*e == ')'){
           while((x=pop()) != '('){
            printf("%c",x);
           }
        }
        else{
            while(Priority(Stack[top]) >= Priority(*e)){
                printf("%c",pop());
            }
            push(*e);
        }
        e++;
    }

    while(top != -1){
        printf("%c",pop());
    }

    // for(int i=0;i<STACK_SIZE;i++){
    //     printf("%c",Stack[i]);
    // }

    return 0;
}