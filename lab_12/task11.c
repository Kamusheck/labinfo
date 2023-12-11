#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool f(int num){
  if (-10 < num && num < 10){
    return true;
  }
    int last_digit = num % 10;
    num =abs(num) / 10;
    
    while (num > 0){
        int this_digit = num % 10;
        
        if (abs(last_digit) >= abs(this_digit)){
            return true;
        }
        else {
            return false;
        }
        
        last_digit = this_digit;
        num = num / 10;
    }
    return 0;
}

int main(){
    int num;
    scanf("%d", &num);
    printf("%d \n", f(num));
    return 0;
}
