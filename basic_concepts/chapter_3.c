/*
#include<stdio.h>
int main()
{
    int age = 19;
    if( age >= 18) {
        printf("ypu are adult");
}
else{
    printf("you r not adult ");

}

printf("\nthank  you :::::");

return 0;

}*/
/*
#include<stdio.h>
int main()
{
    int number;
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;

}*/
/*
#include<stdio.h>
int main()
{
    int age;
    printf("Enter age :");
    scanf("%d", &age);

    if (age < 12){
        printf("Child");
    }
    else if(age < 18){
        printf("Teenager");
    }
    else {
        printf("adult");
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d", &age);

    age > 18 ? printf("adult \n") : printf("not adult \n");

    int number = 7;
    int luckynumber = 10;
    number == luckynumber ? printf("you are lucky \n") : printf(" you are not lucky \n");
return 0;
}

#include<stdio.h>
int main()
{
    int day;
    printf("enter day(1-7) : ");
    scanf("%d", &day);
    
    switch(day){

        case 1: printf("monday\n");
        break;
        case 2: printf("tuesday\n");
        break;
        case 3: printf("wednesday\n");
        break;
        case 4: printf("thrusday\n");
        break;
        case 5: printf("friday\n");
        break;
        case 6: printf("saturday\n");
        break;
        case 7: printf("sunday\n");
        break;
    }
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int day = 5;
    switch(day){

        case 'm': printf("monday\n");
        break;
        case 't': printf("tuesday\n");
        break;
        case 'w': printf("wednesday\n");
        break;
        case 'T': printf("thrusday\n");
        break;
        case 'f': printf("friday\n");
        break;
        case 's': printf("saturday\n");
        break;
        case 'S': printf("sunday\n");
        break;
    }
    return 0;
}
*/
#include<stdio.h>
int main(){
    printf("enter number(0-100) :");
    scanf("%d", &marks);

    if(marks <= 30){
        printf("Fail \n");
    }
    else{
    ("Pass \n");
}
return 0;
}
// ternary statement for this

//marks <= 30 ? printf("Fail \n") : printf("Pass \n");
//  ternary condition is not good decision for this question as there are so many condition 


#include<stdio.h>
int main(){
    printf("enter number(0-100) :");
    scanf("%d", &marks);

    if(marks <= 30){
        printf("C \n");
    }
    else if (marks >= 30 && marks < 70 ) {
        printf("B \n");
    }
    else if(marks >= 70 && marks < 90){
        printf("A \n");
    }
    else{
        printf("A+ \n"); 
    }
    
return 0;
}





