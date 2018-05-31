#include <stdio.h>
#include <stdlib.h>
void bubbleSort(const int *NumBers1,int *NumBers,int Times)

{
    int step=0;
    
    int a=0, b=0;
    
    for(a = 0;a<Times; a++) {
    	
        for( b=a;b < Times;b++) {
        	
            if( NumBers[b] > NumBers[a] ) 
            
            {
            step = NumBers[b];
            
                NumBers[b] = NumBers[a];
                NumBers[a] = step;
            }
        }
    }
}
