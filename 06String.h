#ifndef STRINGS_H_
#define STRINGS_H_

int  isEmpty(const char* s);
int getLength(const char* s);
int areEqual(const char* s1, const char*s2);
int areDecimalDigits(const char* s);
int contains(const char* s, char c);
int toInteger(const char*s);
int isUpperCase(const char* s);
void concatenate(const char*s1, const char*s2, char* nuevoString);
void power(const char* s, int n, char* nuevoString);
void toUpperCase(const char*s, char* nuevoString);

#endif
