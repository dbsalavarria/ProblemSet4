#include <stdio.h>

#define MAX_LINE 40

void removeLastCharacter(char s[])
{
    for (int i = 0; i < MAX_LINE; i++)
    {
        if (s[i] == '\0')
        {
            s[i-2] = s[i-1];
            s[i-1] = s[i];
            fputs(s, stdout); //fileputstring
            return;
        }
    }
}

int main()
{
    char line[MAX_LINE] = {0};

    fgets(line, MAX_LINE, stdin); //filegetstring
    
    removeLastCharacter(line);
}