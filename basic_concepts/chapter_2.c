/* #include<stdio.h>
#include<math.h>
int main()
{
    int a =2;
    int b = 3;
    int c = a+b;
    int power = b^c;
    printf("%d",power);
    return 0;
    
}*/
/*
#include<stdio.h>
 int main()
{
    int age = 44;
    int oldage = age;
    int newage = oldage + 5;
    printf("new age is : %d", newage);

    int rupee  = 1, dollar;
    dollar = 4;


}*/
/* type conversion
#include<stdio.h>
int main()
{
    printf("sum of 2 & 3 :%d", 2 + 3);
    printf("sum of 2.0 & 3.0 :%f", 2.0 + 3.0);
    printf("sum of 2.0 & 3 :%f", 2.0 + 3);   
}*/

/* associativity 
#include<stdio.h>
int main()
{
    printf("output : %d", 5+2/3*2);
    return 0;
}*/

/* 
#include<stdio.h>
int main()
{
    printf("%d",4==4);
    printf("%d\n",3<4);
    printf("%d\n", 4<4);
    printf("%d\n", 4<=4);
    printf("%d\n", 4>3);
    printf("%d\n",3>4);
    printf("%d", 4>4);
    printf("%d\n", 4>=4);
    printf("%d\n", 4!=4);
    printf("%d\n", 3!=4);
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    printf("%d\n",3<4 && 5>3);
    printf("%d\n", 3>4 && 5<4);

    printf("%d\n",3<4 && 5>3);
    printf("%d\n", 3>4 || 5<4);

    printf("%d\n", !3<4 ||5>3);
    printf("%d\n", !3>4 && 5<4); 
  return 0;
}*/
/*
# include <stdio.h>
int main()
 {
int a = 10;
a += 10;
printf("a+10 = %d \n", a);
a -= 10;
printf("a-10 = %d \n", a);
a *= 10;
printf("a*10 = %d \n", a);
a /= 10;
printf("a/10 = %d \n", a);
a %= 10;
printf("a%c10 = %d \n", '%', a);
return 0;
}

#include<stdio.h>
int main()
{
    int x;
    printf("enter a number :");
    scanf("%d", x);
    printf("%d", x%2 == 0);
    return 0;
}
*/
#include<stdio.h>
int main()

{
    int x;
    printf("enter number : ");
    scanf("%d", & x);
    printf("%d\n", x>9 && x<100);
    return 0;
}

