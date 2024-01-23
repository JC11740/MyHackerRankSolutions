#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  
  int max1 = 0, max2 = 0, max3 = 0;
  
  int v1 = 0, v2 = 0, v3 = 0;
  
  //will go through values of 1st number
  for (int x = 1; x <= n; x ++ ) {
      
      //will go through values of 2nd number
      for (int y = x + 1; y <= n; y ++ ){
                             
            //value of AND to be compared with k
            v1 = x & y;
          
            //value of OR to be compared with k
            v2 = x | y;
          
            //valye of XOR to be compared with k
            v3 = x ^ y;
          
            //AND operator
            if ( (v1 > max1) && (v1 < k) ) {
              max1 = v1;
            }
          
            //OR operator
            if ( (v2 > max2) && (v2 < k) ) {
              max2 = v2;
            }
          
            //XOR operator
            if ( (v3 > max3) && (v3 < k) ) {
              max3 = v3;
            }
        }
    }
    
    printf("%d\n", max1);
    printf("%d\n", max2);
    printf("%d\n", max3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
