#include<stdio.h>
#include<stdlib.h>
int graph[10][10],n,visited[10];
void dfs(int i)
{
int j;
printf("%d-",i);
visited[i]=1;
for(j=0;j<n;j++)
if(!visited[j] && graph[i][j]==1)
dfs(j);
}
int main()
{
int i,j;
printf("\n enter the no of vertices");
scanf("%d",&n);
printf("\n adjacency matrix");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&graph[i][j]);
}
}
for(i=0;i<n;i++)
visited[i]=0;
printf("\n nenter the starting vertex");
scanf("%d",&i);
dfs(i);
return 0;
}
