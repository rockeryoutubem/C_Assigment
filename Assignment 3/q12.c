# include <stdio.h>
int main (){
    int num = 12345;
    int copy = num;
    int rev=0;
    while(num>0){
        int last = num % 10;
        rev = (rev*10)+last;
        num/=10;
    }
    printf("%d",rev);
    if(rev == num){
        printf("it is a palidrom");
    }
    else{
        printf("it is not a palidrom");
    }
}
