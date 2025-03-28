#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100005
int m,n,target;
int a[MAX_SIZE],b[MAX_SIZE];
int result;
char answer[10];

int main() {
  


    scanf("%d%d%d",&m,&n,&target);
    int left=0,right=n-1;

        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }

for(int i=0;i<n;i++)
{
    scanf("%d",&b[i]);
}

while(left < m&& right >= 0){
  result=a[left]+b[right];
if(result==target)
{
    strcpy(answer,"YES");
    printf("YES");
    
    break;
}
left += (result < target);
right -= (result > target);

}
if(strcmp(answer,"YES")!=0)
{
    printf("NO");
}
return 0;
}

