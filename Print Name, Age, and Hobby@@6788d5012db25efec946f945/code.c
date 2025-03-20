#include<stdio.h>

int main(){
    char name[50],hobby[50];
    int age;
    scanf("%c %c", &name , &hobby);
    scanf("%d", &age);
    printf("Name: %c", name);
    printf("Age: %d", age);
    printf("Hobby: %c", hobby);
    return 0;
}