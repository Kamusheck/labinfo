#include <stdio.h> 
#include <math.h> 
int sign (int a) { 
    if (a > 0) 
        return 1; 
    if (a == 0)  
        return 0; 
    if (a < 0)  
        return -1;
    return 0;
} 
int max (int a, int b) { 
    if (a > b) 
        return a; 
    else 
        return b; 
} 
int min(int a, int b) {
    if (a>b)
        return b;
    else
        return a;
}
int mod (int a, int b) { 
    return (a% b + b) % b; 
} 
int main () { 
    int i = 0, j = -3, l = -7, k = 0, I, J, K, L; 
    while (k <= 51) { 
    if (k == 51) { 
    printf ("i = %d, j = %d, l = %d, k = %d.\n", i, j, l ,k); 
    printf ("За пятьдесят шагов не попали нужную область. Координаты: (%d, %d), параметр движения: %d, шаг: 50.\n", i, j, l); 
    break; 
    } 
if ((((i - 10)*(i - 10) + (j - 10)*(j - 10)) <= 100) && (((i - 10)*(i - 10) + (j - 10)*(j - 10)) >= 25)) { 
    printf ("На шаге под номером %d попали в заданную область.\n", k); 
    printf("i = %d, j = %d, l = %d", i, j, l);
    break; 
    } 
I = i;
J = j;
K = k;
L = l;
i = mod(max(J,L) * I,30) + mod(min(I,L) * J, 20)+ K; 
j = (min(I, max(J, min(L, max(I - L,J -L)) )));
l = (sign (K -10) * (fabs(I - J +L -K)));
k++; 
} 
return 0; 
}
