#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 计算机0布，1剪刀，2石头
// 人类65布，66剪刀，67石头
int main()
{
    printf("This is a small paper scissor stone game, please input what you choose to play.\n");
    printf("A.paper\n");
    printf("B.scissor\n");
    printf("C.stone\n");
    printf("D.I quit\n");
    while (1)
    {
        int number = 0;
        srand((unsigned)time(NULL));
        number = rand() % 3;
        char input;

        scanf("%c", &input);
        if (input == 68)
        {
            break;
        }

        if (number == 0)
        {
            if (input == 65)
            {
                printf("The computer plays the paper.\n");
                printf("You play the paper.\n");
                printf("It's a draw.\n");

                continue;
            }
            else if (input == 66)
            {
                printf("The computer plays the paper.\n");
                printf("You play the scissor.\n");
                printf("You win.\n");

                continue;
            }
            else if (input == 67)
            {
                printf("The computer plays the paper.\n");
                printf("You play the stone.\n");
                printf("You lose.\n");

                continue;
            }
        }

        if (number == 1)
        {
            if (input == 65)
            {
                printf("The computer plays the scissor.\n");
                printf("You play the paper.\n");
                printf("You lose.\n");

                continue;
            }
            else if (input == 66)
            {
                printf("The computer plays the scissor.\n");
                printf("You play the scissor.\n");
                printf("It's a draw.\n");

                continue;
            }
            else if (input == 67)
            {
                printf("The computer plays the scissor.\n");
                printf("You play the stone.\n");
                printf("You win.\n");

                continue;
            }
        }

        if (number == 2)
        {
            if (input == 65)
            {
                printf("The computer plays the stone.\n");
                printf("You play the paper.\n");
                printf("You win.\n");

                continue;
            }
            else if (input == 66)
            {
                printf("The computer plays the stone.\n");
                printf("You play the scissor.\n");
                printf("You lose.\n");

                continue;
            }
            else if (input == 67)
            {
                printf("The computer plays the stone.\n");
                printf("You play the stone.\n");
                printf("It's a draw.\n");

                continue;
            }
        }
    }

    return 0;
}