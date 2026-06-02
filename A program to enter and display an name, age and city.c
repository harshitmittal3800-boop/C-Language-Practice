#include <stdio.h>

int main() {
    char name[50];
    int age;
    char city[50];
    printf("Enter Name:");
    scanf("%s", &name);
    
    printf("Enter Age:");
    scanf(" %d", &age);
    
    printf("Enter City:");
    scanf(" %s", &city);
    
    printf("Name is : %s\n", name);
    printf("Age is :%d\n" ,age);
    printf("City is :%s\n",city);
    
    return 0;
}
