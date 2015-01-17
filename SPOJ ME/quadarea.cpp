#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int isValid(char[],int*,int*,int*);
/*int isCPP,i,j,len,ignore;*/

int main()
{
    char str[100];
    char tmp[200];
    int isCPP,i,j,len,ignore;
    while(scanf("%s",str)>0)
    {
        ignore=0;
        if(isValid(str,&isCPP,&len,&ignore))
        {
            /*printf("Valid!\n");*/
            if(isCPP)
            {
                /*printf("converting to JAVA\n");*/
                for(i=0,j=0;i<=len;i++,j++)
                {
                    tmp[j]=str[i];
                    if(str[i]=='_')
                    {
                        tmp[j]=toupper(str[++i]);
                    }
                }
            }
            else /*isJAVA*/
            {
                /*printf("converting to CPP\n");*/
                for(i=0,j=0;i<=len;i++,j++)
                {
                    tmp[j]=str[i];
                    if(isupper(str[i]))
                    {
                        tmp[j]='_';
                        tmp[++j]=tolower(str[i]);
                    }
                }
            }
            printf("%s\n",tmp);
        }
        else
        {
            if(ignore==0)
            {
                /*printf("Ignoring ");*/
                printf("%s\n",str);
            }
            else
                printf("Error!\n");
        }
    }
    return 0;
}

int isValid(char string[],int *isCPP,int *len,int *ignore)
{
    int res=0,containsScore=0,isLower=0,isUpper=0,containsDoubleScore=0,i;
    *len=strlen(string);
    *ignore=1;
    if(string[0]=='_'||string[*len-1]=='_'||isupper(string[0])||isdigit(string[0]))
        return res;
    else
    {
        for(i=0;i<*len;i++)
        {
            isLower|=islower(string[i]);
            isUpper|=isupper(string[i]);
            if(string[i]==' ')
                return res;
            if(string[i]=='_'&&string[i-1]!='_'&&string[i+1]!='_')
            {
                containsScore=1;
            }
            else if((string[i]=='_')&&(string[i+1]=='_'||string[i-1]=='_'))
            {
                containsDoubleScore=1;
            }
            else if(string[i]=='_'&&isupper(string[i+1]))
                return res;
        }
        /*printf("Score::%3d,\tDoubleScore::%3d,\tLow::%3d,\tUp::%3d\n",containsScore,containsDoubleScore,isLower,isUpper);*/
        if(isLower>0&&containsScore==0&&containsDoubleScore==0&&isUpper==0)
        {
            *ignore=0;
            return res;
        }
        else if(containsScore&isUpper)
            return res;
        else if(isLower>0&&containsScore==1&&containsDoubleScore==0)
        {
                *isCPP=1;
                res=1;
                return res;
        }
        else if(isLower>0&&isUpper>0&&containsScore==0&&containsDoubleScore==0)
        {
            *isCPP=0;
            res=1;
            return res;
        }
        else if(isUpper>0&&isLower==0)
            return res;
        else if(isLower>0&&containsScore==0)
            return res;
        else
            return res;
    }
}
