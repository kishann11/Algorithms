#include<stdio.h>
#include<stdlib.h>
int q[10];
int a[10][10],visited[10];
int front=0,rear=-1;
int v,sv;
void enqueue(int item)
{
q[++rear]=item;
}
int dequeue()
{
return q[front++];
}
void bfs()
{
int i;
int ver;
visited[sv]=1;
enqueue(sv);
while(rear>=front)
{
ver=q[front];
for(i=0;i<v;i++)
{
if(a[ver][i]!=0 && visited[i]==0)
{
enqueue(i);
visited[i]=1;
}
}
printf("%d-",ver);
dequeue();
}
}
int main()
{
int i,j;
printf("\n enter the no of vertex");
scanf("%d",&v);
for(i=0;i<v;i++)
{
for(j=0;j<v;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<v;i++)
{
visited[i]=0;
}
printf("\n enter the starting vertex");
scanf("%d",&sv);
bfs();
return 0;
}


