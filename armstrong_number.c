#include <stdio.h>
#include <math.h>

int isArmStrong(int num){
    int originalNum, result = 0, remainder, n = 0;
    originalNum = num;
    for (int i = 0; originalNum != 0; i++){
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    for(int i = 0; originalNum != 0; i++){
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    return result;
}

int main(){
    int number = 0;
    printf("Enter the number: ");
    scanf("%d", &number);
    if (number == isArmStrong(number)){
        printf("The Number is Armstrong\n");
    } else {
        printf("Not an Armstrong Number\n");
    }
    return 0;
}