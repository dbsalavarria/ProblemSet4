#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *file;
    int ch;
    int counters[127] = {0};

    file = fopen("LoremIpsum.txt", "r");

    if (file == NULL)
    {
        printf("File cannot be opened or does not exist.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        counters[ch]++;
    }

    for (int i = 0; i < 127; i++)
    {
        printf("Count of '%c's = %d\n", i, counters[i]);
    }

    if (file)
    {
        fclose(file);
    }
    return 0;
}