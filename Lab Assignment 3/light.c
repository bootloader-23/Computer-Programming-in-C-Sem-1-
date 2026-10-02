#include <stdio.h>

int main() {
    char color;

    printf("Enter a color: ");
    scanf("%c", &color);

    if (color == 'R' || color == 'r'){
        printf("\nSTOP");
    } else if (color == 'Y' || color == 'y'){
        printf("\nCAUTION");
    } else if (color == 'G' || color == 'g'){
        printf("\nGO");
    } else {
        printf("\nINVALID COLOR");
    }

}
