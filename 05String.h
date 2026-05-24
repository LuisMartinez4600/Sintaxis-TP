#ifndef STRINGS_H_
#define STRINGS_H_

int isEmpty(const char* s);
int getLength(const char* s);
int areEqual(const char* s1, const char* s2);
int areDecimalDigits(const char* s);
int contains(const char* s, char c);
int toInteger(const char* s);
int isUpperCase(const char* s);
char* concatenate(char* s1, const char* s2);
char* power(char* s, int n);
char* toUpperCase(char* s);

#endif