# include <stdio.h>
int main(){
    int n;
    printf("Enter the number of day :- ");
    scanf("%d",&n);
    if (n%4 == 0 and n%100 != 0 or n%400 == 0 ){
        printf("%d is a leap year ",n);
    }
    else{
        printf("%d is not a leap ",n);
    }
    return 0 ;
}
