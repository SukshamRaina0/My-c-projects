#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    system("cls");
    int id;
    int units;
    float total = 0; 
    scanf("%d", &id); 
    scanf("%d", &units);
    
    if (units <= 199) {
        total = units * 1.20;
    } else if (units < 400) { 
        total = (199 * 1.20) + ((units - 199) * 1.50);
    } else if (units >= 400 && units < 600) { 
        total = (199 * 1.20) + (200 * 1.50) + ((units - 399) * 1.80);
    } else { 
        total = (199 * 1.20) + (200 * 1.50) + (200 * 1.80) + ((units - 599) * 2.0);
    }
    
    if (total > 400) {
        total *= 0.85; 
    }
    if (total < 100) {
        total = 100;
    }
    
    printf("%d %.2f\n", id, total); 
    return 0;
}