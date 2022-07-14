#include <stdio.h>

#define TRUE 1

int is_prime(int n)
{
    int i;
    for (i=2;i<n;i++)
        if (n%i==0)
        return !TRUE;
    return TRUE; /*여기까지 오면 소수임 (1과 자기자신을 제외한 모든 수에 대해 나뉘어 떨어지지 않음)*/     
}

void main()
{
    int n;
    
   while(1)
   {
       puts("\n Input number to test");
       scanf("%d", &n);
       if (n<0) 
       continue;
       if(n==0)
       break;
       
       printf("\n Ans: %d is %s prime number",n,is_prime(n) ?"" :"not"); /* if,else문의 사용을 줄이기 위한 구문*/
   }
}
