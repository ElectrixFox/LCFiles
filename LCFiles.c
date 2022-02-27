#include "LCFiles.h"

int GetLines(const char* FilePath)
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
    int size = 0;

    FILE* fp = fopen(FilePath, "r");

    // Looks for the end of the file.
    fseek(fp, 0L, SEEK_END);

    // Gets the position of seek.
    size = ftell(fp);

    fclose(fp);
    
    return size;
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
    int line_count = GetLines(FilePath);

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

int WriteFile(const char* FilePath, const char* text)
{
    // If the file exists then it does it.
    if(Exists(FilePath) != -1)
    {
        FILE* fp = fopen(FilePath, "w");

        // Puts the text into the file.
        fputs(text, fp);

        fclose(fp);
    }
}

int CreateFile(const char* FilePath)
{
    // Creates the file if it doesn't exist.
    if(Exists(FilePath) == -1)
    {
        FILE* fp = fopen(FilePath, "w"); 
        fclose(fp);

        return 1;
    }

    return -1;
}

int Exists(const char* FilePath)
{
    // If it opens it exists.
    return (fopen(FilePath, "r") == 0) ? -1 : 1;
}

int AppendFile(const char* FilePath, const char* text)
{
    if(Exists(FilePath) != -1)
    {
        // Opens the file for appending.
        FILE* fp = fopen(FilePath, "a");

        // Puts the text in the file.
        fputs(text, fp);

        fclose(fp);
    }
}