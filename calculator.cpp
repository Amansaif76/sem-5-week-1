#include<stdio.h>
void add(int a ,int b){
	printf("sum of two numbers is:%d",a+b);
}
void subt(int a ,int b){
	printf("subtraction of two numbers is:%d",a-b);
}
void multi(int a ,int b){
	printf("multiplication of two numbers is:%d",a*b);
}
void divide(int a ,int b){
	printf("quotient of two numbers is:%d",a/b);
}
int main(){
		char oper;
	do{
	
	int a,b;
	printf("\nenter the numbers:\n");
	scanf("%d %d",&a ,&b);

	printf("enter the operation:");
	scanf("%s",&oper);
	switch(oper){
	
	case '+':add(a,b);
	         break;
	case '-':subt(a,b);
	         break;
	case '*':multi(a,b);
	         break;
	case '/': divide(a,b);
	          break;
	default : printf("invalid operation");  
}
}
while(oper='a');

}
