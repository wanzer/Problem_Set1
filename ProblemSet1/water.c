#include <stdio.h>
#include <cs50.h>
#define LITER 6  //liters per minute
#define BOTTLE 2 //bottles in one liter
int main()
{
    int minutes, bottles;  //according to task, minutes and bootles are integer
    printf("minutes: ");
    minutes=GetInt();
    bottles=minutes*LITER*BOTTLE;
    printf("bottles: %d\n", bottles);
}