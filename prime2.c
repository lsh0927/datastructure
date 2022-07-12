#include <stdio.h>
#include <math.h>
#include <time.h>

#define TRUE 1

int is_prime1(int n)
{
    int i;
    for (i=2;i<n;i++)
        if (n%i==0)
        return !TRUE;
    return TRUE; /*여기까지 오면 소수임*/     
}

int is_prime2(int n)
{
    int i,sqrn;
    sqrn=(int)sqrt(n);
    
    for (i=2;i<=sqrn;i++)
        if(n%i==0)
        return !TRUE;
    return TRUE;
    
}
void result(int i, int n, int r, long t)
{
    printf("\n Prime%d Ans: %d is %s prime number in %1ld seconds."
    ,i,n,r ? "": "not",t);
}

#define LOOP 10000

void main()
{
    int n,r,i;
   
    clock_t start, end;
   while(1)
   {
       puts("\n Input number to test");
       scanf("%d", &n);
       if (n<0) 
       continue;
       if(n==0)
       break;
       
       start = clock();
       for (i=0;i<LOOP;i++)
       r=is_prime1(n);
       end = clock();
       
       result(1,n,r,(double)(end-start));
       
        start = clock();
         for (i=0;i<LOOP;i++)
       r=is_prime2(n);
       end = clock();
       
       result(2,n,r,(double)(end-start));
       
       
   }
}
