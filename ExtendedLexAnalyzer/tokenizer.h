#ifndef LEXICALANALYZER_TOKENIZER_H
#define LEXICALANALYZER_TOKENIZER_H
#define MAX_LENGTH 1500
#include <stdbool.h>

char* generalTokenizer(char* line);
char* commentReader(char* startOfToken);
void* stringReader();
#endif //LEXICALANALYZER_TOKENIZER_H