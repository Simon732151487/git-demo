#include<stdio.h>
int main()
{
    char x;
    int a=0,b=0,c=0,d=0;
    scanf("%c",&x);
    while(x!='\n')
    {
        if(x>='0'&&x<='9')
            c++;
        else if((x>='A'&&x<='Z')||(x>='a'&&x<='z'))
            a++;
        else if(x==' ')
            b++;
        else
            d++;/*这里x的值只输入了一次 之后没有改变 陷入死循环 故应该加入一条再次输入scanf的语句*/
      scanf("%c",&x);      
        
    }
        printf("��ĸ����%d\n",a);
        printf("�ո�����%d\n",b);
        printf("��������%d\n",c);
        printf("�����ַ�����%d\n",d);
}
