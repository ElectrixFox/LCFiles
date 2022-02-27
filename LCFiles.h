#ifndef LCFILES_H
#define LCFILES_H

#include <stdio.h>
#include <stdlib.h>

#include <string.h>

// Gets the line count in the file from a specific file path
int getLines(const char* FilePath);

// Gets the ammount of characters in a file.
int GetSize(const char* FilePath);

// Litterally just reads the file and returns its contense
const char* ReadFile(const char* FilePath);

#endif