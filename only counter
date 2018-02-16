#include <stdio.h>
#include <stdlib.h>
/*统计字符串中字母的个数*/

int isalp(char ch)//计算字母个数，如果是字母，返回真
{
    int i,num;
    for(i=0;ch!='\0';i++){
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){num=1;}
        else{num=0;}
    return num;
    }
}
int main()
{
    int i,num=0;
    char str[20];
    printf("Input a string :\n");

    for(i=0;i<20;i++){//读入字符串
        scanf("%c",&str[i]);
    }
    for(i=0;i<20;i++){//计算字母个数
        if(isalp(str[i])){num++;}//返回值为真，num自加
    }
    printf("*****The string is*****\n");//输出字符串
    for(i=0;i<20;i++){
        printf("%c",str[i]);
    }
    printf("\nThe num=%d\n",num);
    return 0;
}
