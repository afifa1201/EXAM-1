#include<stdio.h>
int main(){
	printf("enter a number: ");
	int num,sum=0,num2=0;
	scanf("%d",&num);
int digit;
while(num>0){
	digit= num%10;
	num2=num2*10+digit;
	num=num/10;
}
printf("%d",num2);
	
}
