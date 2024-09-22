#include <stdio.h>

int main()
{
    int a = 5, b = 10, c = 2;
    //Unary Operators
    printf("Unary Plus = %d\n", +a);//Turns the given value into POSITIVE VALUE
    printf("Unary Minus = %d\n", -a);//Turns the given value into NEGATIVE VALUE
    printf("Increment = %d\n", ++a);//Increments the Given Value by (1)
    printf("Decrement = %d\n", --a);//Decrements the Given Value by (1)

    //Adress and Pointer Operators
    int *ptr = &a;//Stores the ADDRESS of the Variable in ptr
    printf("Stored in  : %p \n", ptr); //Use of * to Store an Address
    printf("Adress     : %p \n", &a);//Use of & to print the Address
    printf("ValueInside: %d \n", *ptr);//Use of * to print the value

    //Bitwise Operators
    printf("a & b  = %d\n", a & b);//Bitwise AND
    printf("a | b  = %d\n", a | b);//Bitwise OR
    printf("a ^ b  = %d\n", a ^ b);//Bitwise XOR
    printf("~a     = %d\n", ~a);   //Bitwise NOT
    printf("a << 1 = %d\n", a << 1);//Bitwise LEFT SHIFT
    printf("a >> 1 = %d\n", a >> 1);//Bitwise RIGHT SHIFT

    //Binary Operators (Arithematic)
    printf("A + B = %d\n", a+b);//Addition of Two Values
    printf("A - B = %d\n", a-b);//Subtraction of Two Values
    printf("A * B = %d\n", a*b);//Multiplication of Two Values
    printf("A / B = %d\n", a/b);//Division of Two Values

    //Binary Operators (Comparision)
    printf("Checking for Lesser Value = %d\n", (a<b));//Checks for Lesser Value
    printf("Checking for Greater Value = %d\n", (b>a));//Checks for Greater Value
    printf("Checking for both Conditions  = %d\n", (a<b && b>a));//Gives 1 if BOTH are True
    printf("Checking for either Conditions  = %d\n", (a<=b || b>=a));//Gives 1 if ATLEAST 1 is True
    printf("Chekcing for Equality = %d\n", (a==b));//Checks for the equality between given variables
    printf("Giving the opposite output = %d\n", !(a+b));//Gives 1 if answer is 0, Gives 0 if answer is 1 or more

    //Binary Operators (Assignment Arithematic Operators)
    printf("Result : %d\n", c += a);
    printf("Result : %d\n", c -= a);
    printf("Result : %d\n", c *= b);
    printf("Result : %d\n", c /= b);
    printf("Result : %d\n", c %= a);c=2;

    //Ternary Operators
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);//Checking Conditions Using Ternary Operators

    return 0;
}
