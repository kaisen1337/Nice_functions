#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
    int ch;
    int i = 0;
    if (ac == 2)
    {
        while(av[1][i])
        {
           ch = av[1][i]; 
            if(ch >= 'a' && ch <= 'z')
                ch -= 32;
            else if(ch >= 'A' && ch <= 'Z')
                ch += 32;
            write(1, &ch , 1);
            i++;
        }
    }
    write(1, "\n" , 1);
    return 0;
}
