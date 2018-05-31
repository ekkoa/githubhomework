#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void bubbleSort(int* ,int* ,int);

int main()
{
   int h[10]={5,3,4,2,1,6,8,9,10,7};
    int j=0;
    
    
    printf("排序前:");
    
     for( j = 0; j < 10; j++ ) {
        printf("%3d", h[j]);
    }
   
    bubbleSort(h, h,10);
   
    printf("\n\n排序後:");
    for( j = 0; j < 10; j++ ) {
        printf("%3d", h[j]);
    }
    
    printf("\n\n");
  system("PAUSE");	
  return 0;
}

void bubbleSort(int *NumBers,int *Time,int test)
{
    int step=0;
    int a=0, b=0;
    for(a = 0;a<test; a++) {
        for( b=a;b < test;b++) {
            if( NumBers[b] > NumBers[a] ) 
            {
            step = NumBers[b];
                NumBers[b] = NumBers[a];
                NumBers[a] = step;
            }
        }
    }
}
