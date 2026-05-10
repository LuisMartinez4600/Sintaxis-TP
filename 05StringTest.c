
#include <assert.h>
#include "06String.h"

int main(){
    assert(isEmpty("")==1);
    assert(isEmpty("hola")==0);
    assert(isEmpty(" ")==0);
    assert(isEmpty("a")==0);

    assert(getLength("")==0);
    assert(getLength("hola")==4);
    assert(getLength("a")==1);

    assert(areEqual("hola","hola")==1);
    assert(areEqual("hola","a")==0);
    assert(areEqual("","") == 1);
    assert(areEqual("","hola") == 0);

    assert(areDecimalDigits("4")==1);
    assert(areDecimalDigits("123") == 1);
    assert(areDecimalDigits("4.5")==0);
    assert(areDecimalDigits("a")==0);
    assert(areDecimalDigits("") == 0);

    assert(contains("hola", 'h')==1);
    assert(contains("hola", 'o')==1);
    assert(contains("hola",'l')==1);
    assert(contains("hola", 'a')==1);
    assert(contains("hola", 'p')==0);
    assert(contains("", 'h') == 0);

    assert(toInteger("100")==100);
    assert(toInteger("0") == 0);

    assert(isUpperCase("A")==1);
    assert(isUpperCase("a")==0);
    assert(isUpperCase("") == 0);
    assert(isUpperCase("HOLA123") == 0);
    assert(isUpperCase("HOLA") == 1);
    assert(isUpperCase("ABC") == 1);

     char nuevoString[100];
    concatenate("hola", "mundo", nuevoString);
    assert(areEqual(nuevoString, "holamundo") == 1);

    concatenate("", "mundo", nuevoString);
    assert(areEqual(nuevoString, "mundo") == 1);

    concatenate("hola", "", nuevoString);
    assert(areEqual(nuevoString, "hola") == 1);

    concatenate("", "", nuevoString);
    assert(areEqual(nuevoString, "") == 1);

    char powerString[100];
    power("ab", 3, powerString);
    assert(areEqual(powerString, "ababab") == 1);

    power("a", 0, powerString);
    assert(areEqual(powerString, "") == 1);

    power("a", 1, powerString);
    assert(areEqual(powerString, "a") == 1);

    power("a", 2, powerString);
    assert(areEqual(powerString, "aa") == 1);

    power("", 3, powerString);
    assert(areEqual(powerString, "") == 1);

     char upperString[100];
    toUpperCase("hola", upperString);
    assert(areEqual(upperString, "HOLA") == 1);

    toUpperCase("Hola Mundo", upperString);
    assert(areEqual(upperString, "HOLA MUNDO") == 1);

    toUpperCase("123", upperString);
    assert(areEqual(upperString, "123") == 1);

    toUpperCase("", upperString);
    assert(areEqual(upperString, "") == 1);

    toUpperCase("aBcD", upperString);
    assert(areEqual(upperString, "ABCD") == 1);



    return 0;

}