#include <stdio.h>
#include <alloc.h>
#include <stdlib.h>

#define MAX 9999

void main(void)
{
    int* iptr;
    int i,j;
    
    iptr = (int*)calloc(MAX,sizeof(int)); /* 메모리 할당과 초기화 */
    if(iptr ==NULL) /* 메모리 할당 실패*/
    {
        puts("\n Memory allocation erroe!");
        exit(1);
    }
    
    for(i=2; i<MAX; i++)
    {
        if(iptr[i]==1) /*이미 지워진 수, 소수가 아님 */
            continue;
        j=i;    /* i를 기점으로 해서*/
        while ((j+=i) <= MAX) /*i의 배수들을 모두 지운다*/
            iptr[j] =1;
    }
    for(i=2;i<=MAX;i++)  /* 소수의 출력 */
        if(iptr[i]==0)
            printf("\t %6d",i);
            
}
