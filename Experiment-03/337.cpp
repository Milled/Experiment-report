#include "stdio.h"
int main(int argc, char const *argv[]) {
  printf("20�İ˽��ƺ�ʮ�����Ʒֱ�Ϊ��%o %x\n",20,20);
  printf("64�İ˽��ƺ�ʮ�����Ʒֱ�Ϊ��%o %x\n",64,64);
  printf("127�İ˽��ƺ�ʮ�����Ʒֱ�Ϊ��%o %x\n",127,127);
  return 0;
}

/*#include<stdio.h>
int main()
{
    char ku[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int zh[32],i=0,w,j;
    long int b,y;
    printf("������һ��ʮ�����������ܰ�������ת����2~16�����������\n");
    scanf("%d",&y);
    b=y;
    printf("������Ҫת��Ϊ�Ľ���:");
    scanf("%d",&w);
    printf("\n");
    do
    {
        zh[i]=y%w;
        i++;
        y=y/w;
    }
    while(y!=0);
    printf("��ʮ���Ƶ�%ldת��Ϊ%d����:",b,w);
    for(i--;i>=0;i--)
    {
        j=zh[i];
        printf("%c",ku[j]);
    }
    printf("\n");
    return 0;
}*/
