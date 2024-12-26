#include <unistd.h>
#include <stdio.h>
#include <string.h>

// abcdefghijklmnopqrstuvwxyz/
int main(int ac, char **av)
{
    int ch;
    int deff;
    int i = 0;
    if (ac == 2)
    {
        while(av[1][i])
        {
            if(av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                deff = 'z' - av[1][i];
                ch = 'a' + deff;
            }
            else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                deff = 'Z' -av[1][i];
                ch = 'A' + deff;
            }
            else 
                ch = av[1][i];

        write(1,  &ch, 1);            
            i++;
        }
    }
    write(1, "\n" , 1);
    return 0;
}
