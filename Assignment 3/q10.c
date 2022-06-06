# include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of the a,b,c :- ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c == 180 ){
        printf("traingle is a valid");
    }
    else{
        printf("traingle is not a valid");
    }
}
