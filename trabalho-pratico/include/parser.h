#ifndef PARSER_H
#define PARSER_H
#include <time.h>
#include <stdbool.h>
#include "../include/dataTypes.h"

User *user(char* line);

void flight(char * line);

void reservation(char * line);

void passanger(char * line);

#endif