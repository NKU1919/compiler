//
// Created by MagicBook on 2020/11/30.
//

#ifndef TABLE_FILE_H
#define TABLE_FILE_H

#endif //TABLE_FILE_H

#include <stdio.h>

char* getFileName(int time, char* tail);

FILE* generateLEX();

FILE* generateYACC();

void appendLEX(char* content);

void appendYACC(char* content);

void closeLex();

void closeYacc();
