// learn c programming language
#include<stdio.h> // this is pre prosessor command it represent by # "std" mean standerd input and output heading file 
int multiply(int,int);
int maain(){ // this is the main() funtion it is call by opreting system
  // this is the body of the main function all programme write in this body.
  int a=5;  // int is a data type, "a" is a variable name and 5 is assine in a.
  scanf("%d",&a);
  printf("this is your input value= %d",a);
}

// multiply tow numbers
int multiply(int a,int b){
  return(a*b);
  
}
