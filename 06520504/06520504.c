#include <stdio.h>
#include <stdlib.h>

void d(const int* const ,int* ,const int const );

int main()
{
   int a[10]={5,3,4,2,1,6,8,9,10,7};
    int b=0;
    
    
    printf("排序前:");
    
     for( b = 0; b < 10; b++ ) {
        printf("%3d", a[b]);
    }
   
    d(a,a,10);
   
    printf("\n\n排序後:");
    for( b = 0; b < 10; b++ ) {
        printf("%3d", a[b]);
    }
    
    printf("\n\n");
  system("PAUSE");	
  return 0;
} 
