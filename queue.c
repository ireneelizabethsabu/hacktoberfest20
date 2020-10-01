#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N,M,*N1,*M1,*S;
    scanf("%d %d",&N,&M);
    N1 = (int *)malloc((N+1)*sizeof(int)); 
    M1 = (int *)malloc((M+1)*sizeof(int));
    for(int i=N;i>=0;i--)
    {
        scanf("%d",&N1[i]);
    }
    for(int i=M;i>=0;i--)
    {
        scanf("%d",&M1[i]);
    }
    int max = (N>M)? N : M;
    S = (int *)malloc((max+1)*sizeof(int));
    int i = 0;
    while(i<=M && i<=N)
    {
        S[i] = N1[i]+M1[i];
        i++;
    }
    while(i<=N)
    {
        S[i]=N1[i];
        i++;
    }
    while(i<=M)
    {
        S[i]=M1[i];
        i++;
    }   
    for(int i = max;i>=0;i--)
    printf("%d ",S[i]);
}   
