// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int getValue(char* string);

int main() {

    printf("Kalkulačka objemu a obsahu\n");
    
    printf("\tc => čtverec\n");
    printf("\to => obdélník\n");
    printf("\tt => Rovnoramenný trojúhelník\n");
    printf("\tk => kruh\n");
    
    printf("\nZapište geometrický tvar: ");
    char tvar;
    scanf("%c", &tvar);
    
    if(tvar == 'c') {
        int a = getValue("Zapiš stranu A: ");
        printf("Obvod: o=%d\n", a*4);
        printf("Obsah: S=%d\n", a*a);
        
    } else if(tvar == 'o'){
        int a = getValue("Zapiš stranu A: ");
        int b = getValue("Zapiš stranu B: ");
        printf("Obvod: o=%d\n", (a+b)*2);
        printf("Obsah: S=%d\n", a*b);
        
    } else if(tvar == 't'){
        int a = getValue("Zapiš stranu A: ");
        int va = getValue("Zapiš výšku na stranu A: ");
        float b = sqrt(a*a + va*va);
        printf("Obvod: o=%lf\n", a+(2*b));
        printf("Obsah: S=%d\n", (a*va)/2);
        
    } else if(tvar == 'k'){
        int r = getValue("Zapiš poloměr r: ");
        printf("Obvod: o=%lf\n", 2*M_PI*r);
        printf("Obsah: S=%lf\n", M_PI*r*r);
        
    }
    return 0;
}

int getValue(char* string) {
    printf("%s", string);
    
    int i;
    
    scanf("%d", &i);
    return i;
}
