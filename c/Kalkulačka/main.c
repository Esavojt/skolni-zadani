// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    
    char operace;
    int a;
    int b;
    
    // m - mocnina, o - odmocnina
    // Získej hodnoty z STDIN
    printf("Zapis operaci [+,-,*,/,m,o,!]: ");
    scanf("%c",&operace);
    
    printf("Napis cislo A: ");
    scanf("%d", &a);
    
    // Na odmocninu a factorial nepotrebujeme druhe cislo
    if((operace != 'o') && (operace != '!')){
        printf("Napis cislo B: ");
        scanf("%d", &b);
    }
    
    // Proved podle operace
    int total = 1;
    switch(operace){
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
            
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
            
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
            
        case '/':
            if(b != 0)
                printf("%d / %d = %.1f\n", a, b, (float)a / (float)b);
            else 
                printf("Nulou nelze delit! \n");
            
            break;
        
        case 'm':
            printf("%d^%d = %.2f\n", a, b, (float) pow((double) a, (double) b));
            break;
        
        case 'o':
            if(a >= 0){
                printf("' _____\n");
                printf("-/%d     = %.1f\n", a, (float) sqrt((double) a));
            }else{
                printf("' _____\n");
                printf("-/%d     = %.1fi\n", a, (float) sqrt(-(double) a));
            }
            break;
        
        case '!':
            for (int i = a; i > 0; i--){
                total *= i;
            }
            printf("%d! = %d\n", a, total);
            break;
        
        default:
            printf("Neplatna operace!\n");
    }
    
    
    
    printf("\nZmacknete cokoliv na ukonceni\n");
    getch();  

    return 0;
}