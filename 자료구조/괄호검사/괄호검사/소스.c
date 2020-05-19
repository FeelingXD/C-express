#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack {
    char data;
    struct stack* link;
}stack;

stack* top;
stack* create_node();
void push(char);
void print_stack();
char pop();
int is_empty();

void main() {
    char phrase[30];
    int i, len;
    top = create_node();
    char temp;

    printf("식 입력: ");
    gets(phrase);
    printf("입력한 식: %s\n", phrase);
    len = strlen(phrase);

    for (i = 0; i < len; i++) {

        if (phrase[i] == '(') {
            push('(');
        }

        else if (phrase[i] == ')') {
            temp = pop();
            if (temp == '(') printf("ok\n");

            else if (temp == 'x')   printf("open fail\n");
        }
    }

    if (is_empty() != 1) printf("close fail\n");
}

stack* create_node() {
    stack* p;

    p = (stack*)calloc(1, sizeof(stack));

    return p;
}
void push(char data) {
    stack* q;
    q = create_node();
    q->data = data;

    q->link = top->link;
    top->link = q;


}
void print_stack() {

    stack* q;

    q = top;

    while (q->link != NULL) {
        q = q->link;

        printf("%c ", q->data);
    }
}
char pop() {
    stack* q;
    char res;

    if (top->link == NULL) return 'x';


    q = top->link;
    res = q->data;
    top->link = q->link;
    free(q);
    return res;
}

int is_empty() {

    return  top->link == NULL;
}