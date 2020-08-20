#include <stdio.h> 

int main() {
    int fahr, cel;
    int lower, upper, step; 

    fahr = 0; 
    lower = 0; 
    upper = 300;
    step = 20;

    printf("%3s\t%6s\n", "Cel", "Fah");
    while (fahr <= upper) {
        cel = (fahr - 32) * 5 / 9;
        printf("%3d\t%6d\n", cel, fahr);
        fahr += step;
    }
}
