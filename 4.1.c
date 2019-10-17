#include <stdio.h>

#define ARRAY_SIZE 5 // Define size of array as a constant

int arrayContains(int n, int numeros[ARRAY_SIZE]) // Declare and create a function. Functions takes two ints, outputs one int.
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (n == numeros[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int num = 0;
    int numbers[ARRAY_SIZE] = {2, 4, 6, 8, 10};
    int found = 0;

    printf("Give me a number: "); // Prompt user
    scanf("%d", &num); // Wait for input with scanf()

    found = arrayContains(num, numbers);
    if (found == 1)
    {
        printf("It is contained.\n");
    }
    else
    {
        printf("It is not contained.\n");
    }
}