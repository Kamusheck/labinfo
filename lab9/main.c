#include <stdio.h>

#define MIN(a, b) ((a > b) ? b : a)
#define MAX(a, b) ((a > b) ? a : b)
#define ABS(a) ((a > 0) ? a : a * (-1))
#define SIGN(a) ((a > 0)? 1 : ((a < 0)? -1 : 0))
#define MOD(a,b) (a > 0 ? a - (a / b) * b : (b - (- a -(- a / b) * b)) % b)
#define TRUE 1
#define FALSE 0
#define INITIALI 18
#define INITIALJ -9
#define INITIALL 5
#define INITIALK 0
#define COUNTI(i, j, l, k) (i * (MOD(MAX(j,k), 30)) + j * (MOD(MIN(i, l), 20))+k)
#define COUNTJ(i, j, l, k) (MIN(i, MAX(j, MIN(l, MAX(i - l,j -l)) )))
#define COUNTL(i, j, l, k) (SIGN (k -10) * (ABS(i - j +l -k)))

int inCircle(signed int x, signed int y)
{
	  x = x - 10;
	    y = y - 10;
	      if (x * x + y * y <= 100 && x * x + y * y > 25)
		          return TRUE;
	        else
			    return FALSE;
}
   
int main()
{
	  signed int i, j, l;
	    signed int prevI, prevJ, prevL;
	      signed int k;

	        i = INITIALI;
		  j = INITIALJ;
		    l = INITIALL;
		      k = INITIALK;
		        for (k = k; k <= 50; ++k){
				    if (inCircle(i, j)){
					          printf("Попадание на %d шагу\n", k);
						        break;
							    }
				        prevI = i;
					    prevJ = j;
					        prevL = l;
						    i = COUNTI(prevI, prevJ, prevL, k);
						        j = COUNTJ(prevI, prevJ, prevL, k);
							    l = COUNTL(prevI, prevJ, prevL, k);
							      }
			  if (k == 51){
				      printf("Попадания не было\n");
				          printf("Конечные значения:\nk = %d, i = %d, j = %d, l = %d.\n", 50, prevI, prevJ, prevL);
					    }
			    else
				        printf("Конечные значения:\nk = %d, i = %d, j = %d, l = %d.\n", k, i, j, l);
}
