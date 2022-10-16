// 문제                                                                                                                                                           
// 스택을 사용하여 괄호 검사를 하는 프로그램을 구현하시오.

// 조건1 : 왼쪽 괄호의 개수와 오른쪽 괄호의 개수가 같아야 한다.
// 조건2: 같은 종류의 괄호에서 왼쪽 괄호는 오른쪽 괄호보다 먼저 나와야 한다.
// 조건3: 서로 다른 종류의 왼쪽 괄호와 오른쪽 괄호의 쌍은 서로를 교차하면 안된다.
// 조건4 : 괄호 종류는 ( , { , [ 가 있다고 가정한다.

// [괄호검사 알고리즘]
// 0. 문자열 탐색
// 1. 오른쪽 괄호이면 스택에 삽입
// 2.  왼쪽 괄호이면 스택에서 꺼낸다.
//        짝이 아니면 오류출력

#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 20
typedef char element;
typedef struct {
	int top;
	element data[STACK_SIZE];
} Stack;
//스택 구조체 정의

int checkTest(char expr[]);
void initStack( Stack *s );
int isFull( Stack *s );
int isEmpty( Stack *s );
void push( Stack *s, element data );
element pop( Stack *s );

int main(){
	int i;
	Stack s;
	char expr[20];
	
	printf("괄호포함 수식 입력 : ");
	scanf("%s", expr);
	if (checkTest(expr)) printf("성공");
	else printf("실패");
	return 0;
	
}
void initStack( Stack *s ){
	s->top = -1;
}
int isFull( Stack *s ){
	return s->top == STACK_SIZE-1;
}
int isEmpty( Stack *s ){
	return s->top == -1;
}
void push( Stack *s, element c ){
	if(isFull(s)){
		printf("stack is full\n");
		return ;
	}
	s->top++;
	s->data[s->top] = c;
}
element pop( Stack *s ){
	if(isEmpty(s)){
		printf("stack is empty\n");
		return 0 ;
	}
	return s->data[s->top--];
}
int checkTest(char expr[]){
	int i;
	Stack s;
	initStack(&s);
	char ch,open_ch;
  for(i=0;expr[i]!='\0';i++){
		ch = expr[i];
		switch(ch){
			case '(': 
			case '[':
			case '{':
			push(&s, ch);
				break;
			case ')':
			case ']':
			case '}':	
				if (isEmpty(&s)) return 0;
				open_ch = pop(&s);
				if ((open_ch == '(' && ch != ')') || (open_ch == '[' && ch != ']') || (open_ch == '{' && ch != '}') ) {
					return 0;
				}
				// printf("open_ch=%c\n",open_ch);
				break;
		}
	}
	if (!isEmpty(&s)) return 0;
	return 1;
}