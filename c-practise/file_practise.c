 // enter student info in a file
 #include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("student.txt", "w");
//     char name[30];
//     int roll;
//     float price;

//     printf("enter name: ");
//     scanf("%s", name);
//     printf("enter age: ");
//     scanf("%d", &roll);
//     printf("enter price: ");
//     scanf("%f", &price);

//     fprintf(fptr, "name is : %s\t", name);
//     fprintf(fptr, "roll no is: %d\t", roll);
//     fprintf(fptr, "price is: %f\t", price);

//     fclose(fptr);
//     return 0;

// }

//enter sum of number in a file

int main(){
    FILE *fptr;
    fptr = fopen("sum.txt","r");

    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);
    
    fclose(fptr);

    fptr = fopen("sum.txt", "w");
    fprintf(fptr, "%d", a + b);
    fclose(fptr);
    return 0;
    }