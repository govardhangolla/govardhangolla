#include<stdio.h>
int main(){
    // for(int i=1; i<=5; i=i+1){
    //     // printf("Hello World\n");
    //     printf("%d\n", i);
    // }
    // for(int i=10; i>=1; i=i-1){        // here i is iterator or counter
    //     printf("%d\n",i);
    // }
    // for(int i=0; i<=10; i=i++){
    //     printf("%d\n", i);
    // }

    //increment operator 
    // i++ post increment operator, ++i pre increment operator

    // int i=1;
    // printf("%d\n", i++);              //use, then increase
    // printf("%d\n", i);

    // printf("%d\n", ++i);             //increase, then use
    // printf("%d", i);

    //decrement operator
    //i-- post decrement, --i pre decrement

    // int i=1;
    // printf("%d\n",i--);                //use, then decrement
    // printf("%d\n",i);

    // int i=1;
    // printf("%d\n",--i);                 //decrement, then use
    // printf("%d\n",i);

    // for(float i=1.0; i<=5.0; i++){
    //     printf("%f\n",i);
    // }
    for(char ch='a'; ch<='z'; ch++){
        printf("%c\n",ch);
    }

    // for(int i=1; ;i++){                 //infinite loop
    //     printf("Hello World");
    // }
    return 0;
}