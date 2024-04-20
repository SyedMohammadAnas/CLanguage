#include<stdio.h>
void main(){
    int s1, s2, s3, s4, s5;
    printf("Enter the marks of each subject with each one space in between : ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    printf("The percentage of marks obtained by the student : %g", (s1+s2+s3+s4+s5)/500.0*100);
}