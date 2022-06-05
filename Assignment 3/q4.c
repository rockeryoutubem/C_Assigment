# include <stdio.h>
int main (){
    float cm;
    float km,mm;
    printf("enter the lenght of the centimeter: -  ");
    scanf("%f",&cm);
    km = cm/10000;
    mm = cm%10000;
    printf("km = %.4f",km);
    printf("mm = %.4f",mm);
    return 0 ;
}
