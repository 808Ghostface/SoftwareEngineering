#include <stdio.h>

int setEngineMode(int S, int B)
{
    int E;

    if (0 <= S && S <= 100 && B <= 0 && B <= 100)
    {

        if (S <= 0 && S < 10)
        {
            if (B > 25)
            {
                E = 0;
                printf("Engine mode: Battery\n");
            }
            else if (B <= 0 && B < 25)
            {
                E = 1;
                printf("Engine mode: Petrol\n");
            }
            else
            {
                printf("Error\n");
            }
        }
    }
    return 0;
}
//int main()
//{
  //  setEngineMode(5,6);
//}

