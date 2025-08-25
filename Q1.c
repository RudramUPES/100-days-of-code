#include<stdio.h>
int main() {
int marks;
// //write a program to give grades to a students 
// marks <30 is c 
// 30<=marks<70 is b 
// 70<=marks<90 is a 
// 90<= marks <100 is a+ 

printf("enter a number : ");
scanf("%d" , &marks);

if(marks < 30){
    printf("c\n");
}
else if (marks >= 30 && marks <= 70 ){
    printf("b\n");
}
else if (marks >= 70 && marks < 90 ){
    printf("a\n");
}
else if (marks >=90 && marks < 100 ){
    printf("a+\n");
}
return 0;
}






