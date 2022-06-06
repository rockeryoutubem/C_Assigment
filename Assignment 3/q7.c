# include <stdio.h>
int main(){
    char n;
    printf ("Enter the Alphanet the ");
    scanf("%C",&n);
    if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z')){
    printf("%C is a Alphabet",n)};
    else{
    printf("%C is not a Alphabet",n)};
    return 0;
}
