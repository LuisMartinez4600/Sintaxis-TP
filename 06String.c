#include "05_String.h"


int isEmpty(const char* s){
    if(s[0] == '\0'){
        return 1;
    } else {
        return 0;
    }
}


int getLength(const char* s){
    int i = 0;

    while(s[i] != '\0'){
        i++;
    }
    return i;
}


int areEqual (const char* s1, const char* s2){
    int i = 0;

    while(s1[i] != '\0' && s2[i] != '\0'){
        if(s1[i] != s2[i])
            return 0;
        i++;
    }

    return (s1[i] == '\0' && s2[i] == '\0');
}


int areDecimalDigits(const char* s){
    int i = 0;

    if(s[i] == '\0')
        return 0;

    while(s[i] != '\0'){
        if(s[i] < '0' || s[i] > '9')
            return 0; 
        i++;
    }

    return 1;
}


int contains(const char* s, char c){
    int i = 0;

    while(s[i] != '\0'){
        if(s[i] == c){
            return 1;
        }
        i++;
    }
    return 0;
}


int toInteger(const char* s){
    int i = 0;
    int numero = s[i] - '0';

    for(int i = 1; s[i] != '\0'; i++){
        numero = (numero * 10) + (s[i] - '0');
    }

    return numero;
}


int isUpperCase(const char* s){
    int i = 0;

    if(s[i] == '\0')
        return 0;

    while(s[i] != '\0'){
        if(s[i] < 'A' || s[i] > 'Z')
            return 0; 
        i++;
    }

    return 1;
}


char* concatenate(char* s1, const char* s2){
    int l1 = getLength(s1);
    int l2 = getLength(s2);

    for ( int i = 0; i <= l2; i++ ){
        s1[i+l1] = s2[i];
    }

    return s1;
}


char* power(char* s, int n){
    if(n == 0){
        s[0] = '\0';
        return s;
    }

    char copia[100];
    int i = 0;

    while(s[i] != '\0'){
        copia[i] = s[i]; 
        i++;
    }

    copia[i] = '\0';

    power(s, n-1);

    concatenate(s, copia);

    return s;
}


char* toUpperCase(char* s){
    int i = 0;
    
    while(s[i] != '\0'){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 32;
        }
        i++;
    }

    return s;
}