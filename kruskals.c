#include<stdio.h>
#include<stdlib.h>
inti,j,k,a,b,u,v,n,ne=1;
intmin,mincost=0,cost[9][9],parent[9];
int find(int);
intuni(int,int);
void main()
{
printf("\n\n\tImplementation of Kruskal's algorithm\n\n");
printf("\nEnter the no. of vertices\n");
scanf("%d",&n);
printf("\nEnter the cost adjacency matrix\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
 {
scanf("%d",&cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=999;
 }
}
printf("\nThe edges of Minimum Cost Spanning Tree are\n\n");
while(ne<n)
{
for(i=1,min=999;i<=n;i++)
 {
for(j=1;j<=n;j++)
 {
if(cost[i][j]<min)
 {
min=cost[i][j];
 a=u=i;
 b=v=j;
 }
 }
 }
 u=find(u);
 v=find(v);
if(uni(u,v))
 {
printf("\n%d edge (%d,%d) =%d\n",ne++,a,b,min);
mincost +=min;
 }
cost[a][b]=cost[b][a]=999;
}
printf("\n\tMinimum cost = %d\n",mincost);
}
int find(inti)
{
while(parent[i])
i=parent[i];
returni;
}
intuni(inti,int j)
{
if(i!=j)
{
parent[j]=i;
return 1;
}
return 0;

