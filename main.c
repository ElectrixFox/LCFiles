#include <stdio.h>
#include <stdlib.h>

#include <LCFiles.h>

int main(int argc, const char *argv[])
{
    CreateFile(argv[3]);
    const char* fil = ReadFile(argv[1]);
    WriteFile(argv[3], argv[4]);

    AppendFile(argv[1], argv[2]);
    printf("%s", fil);
    return 0;
}