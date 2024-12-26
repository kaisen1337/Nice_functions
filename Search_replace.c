#include <unistd.h>
#include <stdio.h>
#include <string.h>
// this function take 3 arguement if the seconde arguement exit in the first arguement
// we replace it with the third arguement
int main(int ac, char **av)
{
    int i = 0;
    int alpha = 0;
    if (ac == 4 && (av[2][1] == '\0' && av[3][1] == '\0'))
    {
        while(av[1][i])
        {
            if (av[1][i] == av[2][0])
                alpha =av[3][0];
            else
                alpha = av[1][i];
            write(1, &alpha, 1);
            i++;
        }

    }
    printf("\n");
    return 0;
}
