#include <stdio.h>
#include <stdlib.h>

int main () {
   int i, n;
   time_t t;
   int temp;
   n = 1000;
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 1 to 50 */
   for( i = 0 ; i < n ; i++ ) {


      if(i==0){
	temp= (rand() % 50)+1;
	if (temp>=10)
      	printf("%d", temp);
      }
      else{
        temp= (rand() % 50)+1;
	if (temp>=10)
      	printf("|%d", temp);
      }
   }
  

   return(0);
}
