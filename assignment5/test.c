#include <stdio.h>

int main()
{
    FILE *file = fopen("hello1.txt", "w");
    fprintf(file, "Hello\n");
    fprintf(file, "Tanish how are you\n");

    fclose(file);

    return 0;
}