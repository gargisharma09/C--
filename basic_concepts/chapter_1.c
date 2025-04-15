/* #include<stdio.h>
#include<conio.h>

int main()
{
    printf("Hello World");

return 0;
}*/

// variable: it is the name of thre memory location which stores some data

/*# include<stdio.h>

int main()
{
    int num = 25;
    char star = '*';
    float pi = 3.14;

int a = 40;
int A = 40;
int _age = 40;

return 0; 

}*/
/* rules for  naming a variable 
 a. case sensitive 
 b. 1 st char is  alphabet or '_'
 c. no comma /  blank space
 d. no other symbol other than '_' */

 /*
 data types 
 char = 1byte
 int = 2  byte
 long int = 4
 float = 4
 double = 8 
 long double = 10
 */

/* keywords : reserved words that have special meaning 
c has in all 32 keywords */
// input output 

/* #include<stdio.h>

int main()
{
    int age ;
    printf("enter age: ");
    scanf("%d",&age);
    printf("age is :%d", age);
    return 0; 
}*/
// area of square
/* #include<stdio.h>
 int main()
 {
    int side , area ;

    printf("enter side:");
    scanf("%d", &side);
    
    area = side * side;
    printf("area is : %d ",  area);

return 0 ;
}*/

// area of  circle


#include<stdio.h>

int main()
{
float radius, area;
printf("enter radius");
scanf("%f", &radius);
area = 3.14*radius*radius;
printf("area is :%f", area);
return 0;  
}