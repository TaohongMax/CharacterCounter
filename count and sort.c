#include <stdio.h>
#include <stdlib.h>
/*统计各类字符的数量*/
int main()
{
    int xiaoxie,daxie,num,other,i;
    num=xiaoxie=daxie=other=0;
    char a[20]={'\0'};
    printf("\nPlease input a string:\n");
    scanf("%s",a);

    for(i=0;a[i]!='\n'&&a[i]!='\0';i++){
        if(a[i]>='a'&&a[i]<='z'){
            xiaoxie++;
        }
        else if(a[i]>='A'&&a[i]<='Z'){
            daxie++;
        }
        else if(a[i]>='0'&&a[i]<='9'){
            num++;
        }
        else other++;
    }

    printf("大写 %d\n小写 %d\n数字 %d\n其他 %d\n",daxie,xiaoxie,num,other);
    return 0;
}
