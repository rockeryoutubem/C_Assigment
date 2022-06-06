# include <stdio.h>
int main (){
    int n;
    printf("Enter the number :- ");
    scanf("%d",&n);
    if(n%11==0)||(n%5==0){
        printf("%d the number divisible by 11 and 5 : - ",n);
    }
    else{
        printf("%d the number not divisible by 11 or 5:- ",n);
    }
    return 0;
}
