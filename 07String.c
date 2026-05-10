#include "06String.h"

int isEmpty(const char* s){
    if(s [0] == '\0'){
            return 1;
    }
    else {
        return 0;
    }
}

int getLength(const char* s){
    int contador=0;
    while(s[contador]!='\0'){
        contador++;

    }
    return contador;
}


