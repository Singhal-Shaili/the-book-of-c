#include <stdio.h>
int is_cube(int num) {
    int i = 1;
    do {
        if(i * i * i == num) {
            return 1;
        }
        i++;
    } while (i * i * i <= num);
    return 0;
}
int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads a natural number as input (1, 2, 3 …)
    * 2. If input was not a natural number then print "Invalid input" - without quotes with no trailing newline
    * 3. Define a function is_cube() that determines if a number is cube or not
    * 4. Call is_cube from main with the user input 
    * 5. In main, use the returned value to print "yes" if number was a cube and print "no" if number was not a cube - no trailing newline */
    int a=0, var=0;
    scanf("%d",&a);
    if(a<1)
    {
        printf("Invalid input");
    }
    else
    {
    var=is_cube(a);
    if(var==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    }        
        
return 0;
}