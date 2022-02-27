#include "LCFiles.h"

int getLines(const char* FilePath)
{
    FILE* fp = fopen(FilePath, "r");
    int lines = 1;

    while (!feof(fp))
    {
        char ch = fgetc(fp);
        if(ch == '\n')
            lines++;
    };

    fclose(fp);
    return lines;
}

const char* ReadFile(const char* FilePath)
{
    char* stream = malloc(sizeof(char*) * 1024);
    *stream = '\0';

    FILE* fp = fopen(FilePath, "r");
    char* m = malloc(sizeof(char*) * 1024);
    m[0] = '\0';

    int line_count = getLines(FilePath);

    for (int i = 0; i < line_count; i++)
    {
        char buff[1024];
        fgets(buff, 1024, fp);

        strcat(stream, buff);
    }

    fclose(fp);

    const char* output = stream;

    return output;
}