#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[99];

    for(int i = 0; i < 98; i++)
    {
        array[i] = i + 2;
    }

    for (int i = 2; i < 98; i++) // Cyklus dìlitelù
    {
        for(int j = 0; j < 99; j++) // Cyklus prvkù v poli
        {
            if (array[j] != i)  // Pokud se dìlenec nerovná dìliteli
            {
                if (array[j] % i == 0) // Pokud je výsledek po dìlení 0
                {
                    array[j] = 0;
                }
            }
        }
    }

    printf("Prvocisla:\n");
    for(int i = 0; i < 99; i++)
    {
        if (array[i] != 0)
            printf("%d ", array[i]);
    }
    printf("\n");


    return 0;
}
