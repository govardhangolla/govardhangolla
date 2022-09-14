#include<stdio.h>

// int 
// int main(){
//     int a = 4;
//     int *ptr = &a;
//     printf("%u\n", ptr);
//     ptr++;
//     printf("%u\n", ptr);
//     ptr--;
//     printf("%u\n", ptr);
// }

//float
// int main(){
//     float a = 4;
    // float *ptr = &a;
//     printf("%u\n", ptr);
//     ptr++;
//     printf("%u\n", ptr);
//     ptr--;
//     printf("%u\n", ptr);
// }

// char
// int main(){
//     char a = 'a' ;
//     char *ptr = &a;
//     printf("%u\n", ptr);
//     ptr++;
//     printf("%u\n", ptr);
//     ptr--;
//     printf("%u\n", ptr);
// }

//difference , comparison

int main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u and %u , difference is: %u\n", _ptr,ptr,ptr-_ptr);
    _ptr = &age;
    printf("comparison = %u\n", ptr==_ptr);
    return 0; 
}