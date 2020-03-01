#include<stdio.h>    //I have made it in understanding way.
#include<string.h>   //You can Download it and use it for free
#include<stdlib.h>
struct entry
{
	char name[20];
	int age;
}en;
main()
{
	printf("Name  : ");
	gets(en.name);
	printf("Age   : ");
	scanf("%d",&en.age);    
	float adult=43.75;  
	float adult_gst=6.25;
	float U_adult=27.75;
	float U_adult_gst=2.25;
	if(en.age>=18)
	{
		printf("\n");     //I use printf("\n");  for the your reference..
		printf("\n");
		printf("Name  : %s",en.name);
		printf("\n");
		printf("Age   : %d",en.age);
		printf("\n");
		printf("GST   : %.2f",6.25);
		printf("\n");
		printf("Price : %.2f",adult);
		printf("\n");
	    printf("Total : %.2f",adult+adult_gst);
		printf("\n");	
	}
	else
	{
		printf("Name  : %s",en.name);
		printf("\n");
		printf("Age   : %d",en.age);
		printf("\n");
		printf("GST   : %.2f",2.25);
		printf("\n");
		printf("Price : %.2f",U_adult);
		printf("\n");
	    printf("Total : %.2f",U_adult+U_adult_gst);
		printf("\n");	
	}
}
