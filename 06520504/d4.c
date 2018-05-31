#include <stdio.h>
#include <stdlib.h>
void bubbleSort(const int const *NumBers,int *NumBerss,const int const Time)
{
    int Temp=0;
    int a=0, b=0;
    for( a = 0;a<Time; a++) {
        for( b=a;b< Time;b++) {
            if( NumBerss[b] > NumBerss[a] ) 
            {
                Temp = NumBerss[b];
                NumBerss[b] = NumBerss[a];
                NumBerss[a] = Temp;
            }
        }
    }
}
