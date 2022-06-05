# include <stdio.h>
int main (){
    int d,y,w,m;
    printf("Enter the day : -  ");
    scanf("%d",&d);
    y = d/365;
    w= d%365;
    m = d/30;
    printf("day convert into  the %d year : -  %d weeks : - %d month :-  ",y,w,m);
    return 0 ;
}
