#include <stdio.h>

 int main(){
   int number;
   printf("Enter number:");
   scanf("%d", &number );

   if(number>0){
       printf("positive");
}
   else if(number<0){
       printf("Negetive");
}
   else{
       printf("zero");
}
     
    return 0;
}
