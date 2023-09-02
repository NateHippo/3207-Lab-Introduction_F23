#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar();

int main(){
    printf("%c", randchar());
}
char randchar(){
    srand((unsigned)time(NULL));
    char randomletter = 'A' + (random() % 26);
    return randomletter;
}