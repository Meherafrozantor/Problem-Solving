#include<stdio.h>
int main()
{
    int notes, reminder;

    scanf("%d\n", &notes);

    printf("%d\n", notes);
    printf("%d nota(s) de R$ 100,00\n", notes / 100);
    reminder = (notes % 100);
  
    printf("%d nota(s) de R$ 50,00\n", reminder / 50);
    reminder = (reminder % 50);
  
    printf("%d nota(s) de R$ 20,00\n", reminder / 20);
    reminder = (reminder % 20);
  
    printf("%d nota(s) de R$ 10,00\n", reminder / 10);
    reminder = (reminder % 10);
  
    printf("%d nota(s) de R$ 5,00\n", reminder / 5);
    reminder = (reminder % 5);
  
    printf("%d nota(s) de R$ 2,00\n", reminder / 2);
    reminder = (reminder % 2);
  
    printf("%d nota(s) de R$ 1,00\n", reminder / 1);

     return 0;
}
