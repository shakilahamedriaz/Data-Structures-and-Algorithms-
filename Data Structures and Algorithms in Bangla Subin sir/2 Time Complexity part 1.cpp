
Time complexity :
                               time_complexity

    -Assignment operation , a=5;     O(1)
    -Comparison operation , a>b      O(1)
    -mathmatical operation, 4+5      O(1)   //BIG O

    -function call         r=f(x)
    -inner function work


#include<stdio.h>
int main(){

int n1,n2,result;

  n1= 10;  //1 assign. operaton    O(1)
  n2= 20;  //1 sssign. operaton    O(1)

  result = n1+n2;   //1 assign + mathmatical operaton   O(2)
                    //O(4)----**in Total time complexity = O(1)

           //Order of One time complexity.
return 0;
}
