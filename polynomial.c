#include<stdio.h>
int main(){
    int N,M,ind=0;
    int arr1[10],arr2[10],arr3[10];
    
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++)
        scanf("%d ",&arr1[i]);
    for(int i=0;i<=M;i++)
        scanf("%d ",&arr2[i]);

    while(N>=0 && M>=0)
        arr3[ind++]=arr1[N--]+arr2[M--];
    while(N>=0)
        arr3[ind++]=arr1[N--];
    while(M>=0)
        arr3[ind++]=arr2[M--];
    
    for(int i=ind-1;i>=0;i--)
        printf("%d ",arr3[i]);
        
    return 0;
}
