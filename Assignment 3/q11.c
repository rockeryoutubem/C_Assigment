# include <stdio.h>
void Add(){
    int a,b;
    printf("Enter the Number of the value a and b :- ");
    scanf("%d%d",&a,&b);
    int add = a +b;
    printf("sum of %da and %db = %d",a,b,add);
 
}
void subtract(){
    int a,b;
    printf("Enter the Number of the value a and b :- ");
    scanf("%d%d",&a,&b);
    int add = a-b;
    printf("sum of %da and %db = %d",a,b,add);
    
}
void multiply(){
    int a,b;
    printf("Enter the Number of the value a and b :- ");
    scanf("%d%d",&a,&b);
    int add = a*b;
    printf("sum of %da and %db = %d",a,b,add);
    
}
void divisible(){
    int a,b;
    printf("Enter the Number of the value a and b :- ");
    scanf("%d%d",&a,&b);
    int add = a/b;
    printf("sum of %da and %db = %d",a,b,add);
    
}
int main (){
    int n;
    printf("Enter the value of the you want :- \n");
    printf("1.Add\n");
    printf("2.subtract\n");
    printf("3.multiply\n");
    printf("5.divide\n");
    scanf("%d",&n);
    switch(n) {
        case 1:
            Add();
            break;

        case 2:
            subtract();
            break;

        case 3:
            multiply();
            break;
        
        case 4:
            divisible();
            break;

        default:
            printf("Invalid number :");

    }   
    return 0;     
}
