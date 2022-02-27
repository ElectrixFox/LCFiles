#ifndef LCFILES_H
#define LCFILES_H

#include <stdio.h>
#include <stdlib.h>

#include <string.h>

// Gets the line count in the file from a specific file path.
int GetLines(const char* FilePath);

// Gets the ammount of characters in a file.
int GetSize(const char* FilePath);

// Litterally just reads the file and returns its contense.
const char* ReadFile(const char* FilePath);

// Writes text to file path and returns -1 if there was an error or if there was no file.
int WriteFile(const char* FilePath, const char* text);

// Creates file at file path.
int CreateFile(const char* FilePath);

// Checks if file exists. 1 if it does exist and -1 if not;
int Exists(const char* FilePath);

// Appends text to the file given by file path. Returns -1 if there is any faliour.
int AppendFile(const char* FilePath, const char* text);

#endif