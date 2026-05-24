#include <assert.h>
#include <stdio.h>
#include "05_String.h"

int main(){
    assert(isEmpty("") == 1);
    assert(isEmpty("hola") == 0);
    assert(isEmpty(" ") == 0);
    assert(isEmpty("a") == 0);

    printf("\n==========================================\n");
    printf ("La funcion isEmpty funciono correctamente!");
    printf("\n==========================================\n");


    assert(getLength("") == 0);
    assert(getLength("hola") == 4);
    assert(getLength("a") == 1);

    printf("\n============================================\n");
    printf ("La funcion getLength funciono correctamente!");
    printf("\n============================================\n");


    assert(areEqual("hola","hola") == 1);
    assert(areEqual("hola","a") == 0);
    assert(areEqual("","") == 1);
    assert(areEqual("","hola") == 0);

    printf("\n===========================================\n");
    printf ("La funcion areEqual funciono correctamente!");
    printf("\n===========================================\n");


    assert(areDecimalDigits("4") == 1);
    assert(areDecimalDigits("123") == 1);
    assert(areDecimalDigits("4.5")== 0);
    assert(areDecimalDigits("a") == 0);
    assert(areDecimalDigits("") == 0);

    printf("\n===================================================\n");
    printf ("La funcion areDecimalDigits funciono correctamente!");
    printf("\n===================================================\n");


    assert(contains("hola", 'h') == 1);
    assert(contains("hola", 'o') == 1);
    assert(contains("hola",'l') == 1);
    assert(contains("hola", 'a') == 1);
    assert(contains("hola", 'p') == 0);
    assert(contains("", 'h') == 0);

    printf("\n===========================================\n");
    printf ("La funcion contains funciono correctamente!");
    printf("\n===========================================\n");


    assert(toInteger("100") == 100);
    assert(toInteger("0") == 0);

    printf("\n============================================\n");
    printf ("La funcion toInteger funciono correctamente!");
    printf("\n============================================\n");


    assert(isUpperCase("A")==1);
    assert(isUpperCase("a")==0);
    assert(isUpperCase("") == 0);
    assert(isUpperCase("HOLA123") == 0);
    assert(isUpperCase("HOLA") == 1);
    assert(isUpperCase("ABC") == 1);

    printf("\n==============================================\n");
    printf ("La funcion isUpperCase funciono correctamente!");
    printf("\n==============================================\n");


    assert(areEqual(concatenate((char[10]){"hola"}, "mundo"), "holamundo") == 1);
    assert(areEqual(concatenate((char[6]){""}, "mundo"), "mundo") == 1);
    assert(areEqual(concatenate((char[5]){"hola"}, ""), "hola") == 1);
    assert(areEqual(concatenate((char[1]){""}, ""), "") == 1);

    printf("\n==============================================\n");
    printf ("La funcion concatenate funciono correctamente!");
    printf("\n==============================================\n");


    assert(areEqual(power((char[7]){"ab"}, 3), "ababab") == 1);
    assert(areEqual(power((char[1]){"a"}, 0), "") == 1);
    assert(areEqual(power((char[2]){"a"}, 1), "a") == 1);
    assert(areEqual(power((char[3]){"a"}, 2), "aa") == 1);
    assert(areEqual(power((char[1]){""}, 3), "") == 1);

    printf("\n========================================\n");
    printf ("La funcion power funciono correctamente!");
    printf("\n========================================\n");

   
    assert(areEqual(toUpperCase((char[5]){"hola"}), "HOLA") == 1);
    assert(areEqual(toUpperCase((char[11]){"Hola Mundo"}), "HOLA MUNDO") == 1);
    assert(areEqual(toUpperCase((char[4]){"123"}), "123") == 1);
    assert(areEqual(toUpperCase((char[1]){""}), "") == 1);
    assert(areEqual(toUpperCase((char[5]){"aBcD"}), "ABCD") == 1);

    printf("\n==============================================\n");
    printf ("La funcion toUpperCase funciono correctamente!");
    printf("\n==============================================\n");

    return 0;

}