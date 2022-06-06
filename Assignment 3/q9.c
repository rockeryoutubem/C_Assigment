# include <stdio.h>
int main(){
    char a;
    printf("Enter the value of a :- ");
    scanf("%c",&a);
    if(a>='z' && a<='z') || (a>='A' && a<='Z'){
        printf("%c this a Alphabet",a);
    }
    else if(a>='0' && a<='9'){
        printf("%c this a digit",a);
    }
    else{
        printf(" its a special character");
    }
    return 0;
}
