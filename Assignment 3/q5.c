# include <stdio.h>
int main(){
    int num,n,bitstatus;
    printf("Enter the number : - ");
    scanf("%d",&num);
    printf("Enter the number between (0-31)");
    scanf("%d",&n);
    bitstatus = (num >> n) & 1;
    printf("the value of the bitwise : - ",bitstatus);
    return 0 ; 
}
