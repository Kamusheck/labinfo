#include <stdio.h>
#include <stdbool.h>

bool f(int num){
    int last_digit = num % 10;
    num = num / 10;
    
    while (num > 0){
        int this_digit = num % 10;
        
        if (last_digit >= this_digit){
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
