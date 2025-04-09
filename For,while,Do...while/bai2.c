#include <stdio.h> 
#include <math.h>

 int main() {
     int x, n=0;
     scanf("%d", &x);
     for (int i=2; i <= sqrt(x); i++){
        if ( x % i == 0){
                        n=1;
                  break;
              }
           }
     if(n == 0 && x >= 2)
         printf("YES\n");
     else
         printf("NO\n");
return 0;
 }
