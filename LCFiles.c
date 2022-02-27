#include "LCFiles.h"

int getLines(const char* FilePath)
{
    // Opens file to read
    FILE* fp = fopen(FilePath, "r");
    int lines = 1;

    // While there is not a new line
    while (!feof(fp))
    {
        // Gets the next character from the stream.
        char ch = fgetc(fp);

        // If the new line is found then it adds the line to the count. 
        if(ch == '\n')
            lines++;
    };

    fclose(fp);
    return lines;
}

int GetSize(const char* FilePath)
{
    
}

const char* ReadFile(const char* FilePath)
{
    // Allocates memory for the stream.
    char* stream = malloc(sizeof(char*) * 1024);

    // Initalise the first character with a null character to stop unexpected outputs.
    *stream = '\0';

    // Opens for reading.
    FILE* fp = fopen(FilePath, "r");

    // Finds out how many times getting a line has to be iterated .
    int line_count = getLines(FilePath);

    for (int i = 0; i < line_count; i++)
    {
        // Buffer for file line.
        char buff[1024];

        // Gets a line with max length of 1024 bytes.
        fgets(buff, 1024, fp);

        // Adds that to the stream.
        strcat(stream, buff);
    }

    fclose(fp);

    // Sets a constant output.
    const char* output = stream;

    return output;
}