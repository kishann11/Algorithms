#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10][10];
int u=0;
int v=0;
int visited[10];
int min=999;
int total=0;
int i,j,counter,n,k;
printf("\n enter the no of vertices\n");
scanf("%d",&n);
printf("\n enter matrix\n");
for(i=0;i<n;i++)
{
visited[i]=0;
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
if(a[i][j]==0)
{
a[i][j]=999;
}
}
}
printf("\n enter start node");
scanf("%d",&k);


for(counter=0;counter<n-1;counter++)
{
min=999;
visited[k]=1;
for(i=0;i<n;i++)
{
if(visited[i]==1)
{
for(j=0;j<n;j++)
{
if(visited[j]!=1)
{
if(min>a[i][j])
{
min=a[i][j];
u=i;
v=j;
}
}
}

}

}
visited[v]=1;
printf("%d -> %d=%d\n",u,v,min);
total+=min;
}
printf("\n total weight %d",total);
return 0;
}

