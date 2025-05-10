#include <stdio.h>
#include <string.h>

int Compare(char a[], char b[]){
    int result = strcmp(a, b);
    if (result == 0) {
        printf("The strings are the same.\n");
    } else if (result < 0) {
        printf("String a is smaller than string b.\n");
    } else {
        printf("String a is larger than string b.\n");
    }
    return result;
}

int main(){
    char a[123], b[100];
    int ComparedValue;
    printf("Enter String a: ");
    scanf("%s", a);
    printf("Enter String b: ");
    scanf("%s", b);
    ComparedValue = Compare(a, b);
    printf("Compared Value: %d\n", ComparedValue);
    return 0;
}