#include "LCFiles.h"


const char* ReadFile(const char* FilePath)
{
    LCstring stream = malloc(sizeof(LCstring) * 1024);

    char buff[1024];

    FILE* fp = fopen(FilePath, "r");

    for (int i = 0; i < 2; i++)
    {
        fgets(buff, 1024, fp);
        strcat(stream, buff);

        //printf("\n%d: %s", i, stream);
    }
    

    fclose(fp);

    const char* output = stream;

    return output;
}