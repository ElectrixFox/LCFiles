#include <stdio.h>
#include <stdlib.h>

#include <LCFiles.h>

int main()
{
    char* fil = ReadFile("Hello.txt");
    printf("%s", fil);

    return 0;
}