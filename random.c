#include <stdlib.h> 
#include <time.h>   
#include <stdio.h>   


char randchar(void);

char randchar(void) {

    srand(time(NULL));

    int randomIndex = rand() % 26;

    return 'A' + randomIndex;
}
