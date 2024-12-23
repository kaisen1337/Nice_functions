#include <stdio.h>


int main()
{
    int n;
    int r;
    int arr[10]={0};
    scanf("%d", &n);
    int counter = 0;
    while (n)
    {
        r = n%10;
        arr[r] += 1;
        n = n/10;
    }
    int i = 0;
    while(i <= 10)
    {
        if(arr[i] > 0)
            counter++;
        i++;
    }
        printf("%d", counter);
        return 0;
}