#include <stdio.h>


int reverse(int num, int rev)
{
    if(num==0)
    {
        return rev;
    }
    else{
        int dig = num%10;
        rev = rev *10 + dig;
        reverse(num/10,rev);
    }

}
int main()
{
    int num;
    printf("Enter numero : ");
    scanf("%d", &num);
    
    printf("After revering : %d", reverse(num,0));

    return 0;
}