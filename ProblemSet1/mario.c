#include <stdio.h>
#include <cs50.h>

int main()
{
    int num;
    do {
    printf("Height: ");
    num=GetInt();
    }
    while (num<0 || num>23);
    
    for (int i=0; i<num; i++) {            //Number of lines according to given height
        
         for (int k=0; k<num-1-i; k++) {
             printf(" ");                  //Number of spaces before hashes
            }
            
        for (int j=0; j<i+2; j++) {
            printf("#");                 //Number of hashes
        }
        printf("\n");
    }
    
}