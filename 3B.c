#include<stdio.h>
#include<string.h>
char pf[100];
char st[100];
int top = -1;
int is_operator(char ch) {
    switch(ch) {
        case '+':
        case '-':
        case '*':
        case '/':
            return 1;
        default:
            return 0;
    }
}
int precedence(char op) {
    switch(op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return -1;
    }
}
char* infix_to_postfix(char* infix) {
    int i, k = 0;
    for (i = 0; infix[i] != '\0'; i++) {
        if (infix[i] == '(') {
            st[++top] = infix[i];
        } else if (infix[i] == ')') {
            while (top != -1 && st[top] != '(') {
                pf[k++] = st[top--];
            }
            if (top != -1) {
                top--; 
            }
             } else if (is_operator(infix[i])) {
            while (top != -1 && st[top] != '(' && precedence(st[top]) >= precedence(infix[i])) {
                pf[k++] = st[top--];
            }
            st[++top] = infix[i];
        } else {
            pf[k++] = infix[i]; 
        }
    }
    while (top != -1) {
        pf[k++] = st[top--];
    }
    pf[k] = '\0';
    return pf;
}

int main() {
    char infix[100];
    printf("Enter an infix expression: ");
    scanf("%[^\n]s", infix);
    printf("Infix Expression: %s\n", infix);
    printf("Postfix Expression: %s\n", infix_to_postfix(infix));
}

