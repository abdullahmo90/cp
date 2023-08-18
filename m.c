#include<stdio.h>
void main (void)
// find the value of (a)that equal 97
/*{
char x=97;
printf("%c",x);	
}*/

//find value of binary numbers
/*{
char x=0b11111011;
printf("%d",x);
}*/

// output=-1 
/*{
char x=255;
printf("%d",x);	
}*/

//signed and unsigned code
/*{
signed char x=-127;
unsigned char y=127;
unsigned char z=x+y;
printf("%d",z);
}*/


/*{
	float x=5.5,y=3.2;
	float z=x+y;
	printf("%f",z);
}*/

//char/char=char , char/float=float
/*{
	char x=5;
	float y=2;
	float z=x/y;
	printf("%f",z);
}*/

//explicit casting
/*{
	char x=5,y=2;
	float z=(float)x/y;
	printf("%f",z);
}*/

//باقي القسمة
/*{
int x=5%2;
printf("%d",x);	
}*/

//10=0000 1010 to 2=0000 0001
/*{
	char x=10>>2;
	printf("%d",x);
}*/

/*{
char x=5,y=10;
x+=y;
printf("%d",x);	
}*/

//++x and x++
/*{
char x=5;
printf("%d\n",++x);
printf("%d\n",x);	
}*/

// to know the number of byte
/*{
printf("char%d\n",sizeof(char));
printf("short int%d\n",sizeof(short signed int));	
printf("long int%d\n",sizeof(long signed int));
printf("short unsigned int%d\n",sizeof(short unsigned int));
printf("long unsigned int%d\n",sizeof(long unsigned int));
printf("int%d\n",sizeof(int));
printf("float%d\n",sizeof(float));
printf("long double%d\n",sizeof(long double));	
printf("signed int%d\n",sizeof(signed int));
printf("unsigned int%d\n",sizeof(unsigned int));
}*/

//assignment 1-----------------------------------------------------------------------





//1-find value of hex numbers
/*{
int number;
scanf("%d",&number);
printf("%x",number);
}*/

//2-minimize the output n of digits  
/*{
	float x=5.4,y=3.3;
	float z=x+y;
	printf("%.2f",z);
}*/

//3-print \n in the code
/*{
printf("%d\\n");	
}*/

//4-(+ - * /)
/*{
int x,y;
scanf("%d",&x);
scanf("%d",&y);
float sum=x+y;
float substract=x-y;
float multip=x*y;
float division=x/y;
int z= x%y;
int AND= x&y;
printf("the sum=%f",sum);
printf("the substract=%f",substract);
printf("the multiplication=%f",multip);
printf("the division=%f",division);
printf("the remaining=%f",z);
printf("the and gate=%f",AND);
}*/

//5-GPA
/*{
float mark1,mark2,mark3,totalmark,sum;
float avg,div,per;
printf("enter marks of the 3 courses out of 100");
scanf("%f",&mark1);
scanf("%f",&mark2);
scanf("%f",&mark3);

sum =mark1+mark2+mark3;
printf("sum=%f",sum);

avg =sum/3;
printf("avg=%f",avg);

per =(sum*100)/300;
printf("per=%f",per);

if (per>=90 && per<=100)
{
	printf("\nGPA=4");
}
else if (per>=85 && per<=89)
{
	printf("\nGPA=3.7");
}
else if (per>=80 && per<=84)
{
	printf("\nGPA=3.3");
}
else if (per>=75 && per<=79)
{
	printf("\nGPA=3");
}
else if (per>=70 && per<=74)
{
	printf("\nGPA=2.7");
}
else if (per>=65 && per<=69)
{
	printf("\nGPA=2.3");
}
else if (per>=60 && per<=64)
{
	printf("\nGPA=2");
}
else if (per>=55 && per<=59)
{
	printf("\nGPA=1.7");
}
else if (per>=50 && per<=54)
{
	printf("\nGPA=1.3");
}
else if (per>=00 && per<50)
{
	printf("\nGPA=0");
}
}*/







