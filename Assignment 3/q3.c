
# include <stdio.h>
int main (){
    int phy,chm,maths,eng,hindi;
    int percentage;
    int total;
    int Avg;
    printf("Enetr the marks :- \n");
    printf("physics:-  \n");
    printf("chemistry:-  \n");
    printf("Maths:-  \n");
    printf("English :-  \n");
    printf("hindi:-  \n");
    scanf("%d%d%d%d%d \n", &phy,chm,maths,eng,hindi);
    total = phy+chm+maths+eng+hindi;
    Avg  = total/5;
    percentage = Avg*100;
    printf("day convert into  the %d year : -  %d weeks : - %d month :-  ",total,Avg,percentage);
    return 0;
}
