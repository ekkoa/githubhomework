#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int *const NumBers,int const Time)
{
    int *Temp=0;
    
    int a=0, b=0,i=0;
    
    for(a = 0;a<Time; a++) {
    	
        for(b=a;b<Time;b++) {
        	
            if( NumBers[b] > NumBers[a] )
			 
            {
            	
                Temp = NumBers[b];
                
                NumBers[b] = NumBers[a];
                
                NumBers[a] = Temp;
                
            }
        }
    }
  return 0;
}
