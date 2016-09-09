#include <stdio.h>
#include <cs50.h>

#define COIN25 25
#define COIN10 10
#define COIN5 5
#define COIN1 1

int main() 
{
    float change;
    int centNum;
    int count=0;
    
    do {
        printf("How much change is owed?\n");
        change=GetFloat();
    }
    while (change<0);
    centNum=change*1000/10;
    while(COIN25<=centNum) {
        count++;
        centNum-=COIN25;
        
    }
    while (COIN10<=centNum) {
        count++;
        centNum-=COIN10;
        
    }
    while (COIN5<=centNum) {
        count++;
        centNum-=COIN5;
        
    }
    while (COIN1<=centNum) {
        count++;
        centNum-=COIN1;
        
    }
    printf("%d\n", count);
}