#include "LCFiles.h"


const char* ReadFile(const char* FilePath)
{
    LCstring stream = malloc(sizeof(LCstring) * 1024);

    char buff[1024];

    FILE* fp = fopen(FilePath, "r");

    fgets(buff, 1024, fp);

    fclose(fp);

    const char* output = buff;

    return output;
}