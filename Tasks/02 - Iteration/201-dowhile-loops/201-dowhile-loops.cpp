#include <stdio.h>

int main()
{
    int i = 0;

    printf("Start while loop\n");

    do
    {
        printf("i = %d\n", i);
        i = i + 1;              //Alternatively, we write i++;
    } while (i < 5);            //Repeats if condition is met

    printf("Finished: i = % d\n", i);

}


