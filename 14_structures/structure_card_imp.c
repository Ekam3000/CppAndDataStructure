#include<stdio.h>
#include<stdlib.h>
struct card
{
    int face;
    int shape;
    int color;
    //total memory 12 bytes
};
int main()
{
   // struct card c;
   // c.face = 1;
   // c.shape = 0; // 0,1,2,3 for 4 different types ex --> 0 for spade, 1 for heart ...
   // c.color = 1; // 0 for black ,  1 for red
                 // struct card c={1,0,0}; //initialization and decleration
                 // struct card deck[52]; // 52 different cards //total memory = 52*12
                 // struct card deck[52] ={{1,0,0},....} ; // we can initialise all the 52 cards
                 // printf("%d",deck[0].face);
                 // printf("%d",deck[0].shape);
                  struct card *deck =(struct card*)malloc(52*sizeof(struct card));
                  deck[0].face=1;
                  deck[0].shape= 0;
                  printf("%d \n",deck[0].face);
                  printf("%d \n",deck[0].shape);
}