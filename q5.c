#include<stdio.h>
int main(){
	printf("enter a number: ");
	int sum=0,num;
	
	scanf("%d",&num);
	int ldigit,fdigit;
	while(num>0){
	ldigit=num%10;
	sum=fdigit+ldigit;
	num=num/10;

}
printf("%d",sum);

}
	
	

