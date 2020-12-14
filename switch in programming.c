#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks=10;
    switch(marks)
    {
    case 90:
    printf("excellent");
    break;

    case 80:
        printf("very good");
        break;

    case 30:
        printf("good");
        break;

    case 10:
        printf("very poor");
        break;
    default:
        printf("grades not available");

    }

}
