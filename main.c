#include <stdio.h>
#include <stdlib.h>

#include <LCFiles.h>

int main(int argc, const char *argv[])
{
    const char* fil = ReadFile(argv[1]);
    printf("%s", fil);
    return 0;
}