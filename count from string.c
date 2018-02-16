#include <stdio.h>
#include <stdlib.h>
/*统计字符串在字符串string中出现的次数*/
int main()
{
    int i,j;
    int m=0,n;//m is the counter
    char s[2]={'\0'},str[20]={'\0'};

    printf("\nPlease input str[]:\n");
    for(i=0;i<20;i++){
        scanf("%c",&str[i]);
        if(str[i]=='\n')break;
    }

    printf("\nPlease input s[]:\n");
     for(i=0;i<2;i++){
        scanf("%c",&s[i]);
        if(s[i]=='\n')break;
    }

    for(i=0;str[i]!='\0'&&str[i]!='\n';i++){
        if(str[i]==s[0]){
            if(s[1]=='\n'){
                m++;
            }
            else{
                if(str[i+1]==s[1]){
                    m++;
                }
            }
        }
    }
    printf("\n%d\n",m);
    return 0;
}
