#include<stdio.h>
int main(){
	printf("= MY FIRST C PROGRAM FOR CALCULATOR=");
	char name[50];
	float physics,maths,computer,chemistry;
	float total;
	float percentage;

	printf("The name of student");
    scanf(" %49[^\n]", name);
	printf("enter the marks for physics");
	scanf("%f",&physics);
	printf("enter the marks for chemistry");
    scanf("%f",&chemistry);
	printf("enter the marks for computer");
	scanf("%f",&computer);
	printf("enter the marks for maths");
	scanf("%f",&maths);
	total=maths+physics+computer+chemistry;
	percentage=(total/400)*100;
	printf("NAME:%s\n",name);
	printf("TOTAL MARKS:%.2f\n",total);
	printf("PERCENTAGE:%.2f%%\n",percentage);
	if(percentage>=90)
	printf("GRADE IS A1\n");
	else if(percentage>=80)
	printf("GRADE IS B\n ");
	else if(percentage>=70)
	printf("GRADE IS C\n");
	else if(percentage>=60)
	printf("GRADE IS D\n");
	else
	printf("GRADE IS F\n");
	if(percentage>=50)
	printf("RESULT=PASS\n");
	else
	printf("RESULT=FAIL\n");
	 printf("\n===== THANK YOU  FOR VISITING MY FIRST SMALL PROJECT=====\n");

	return 0;
	
	
	
}