#include <stdio.h>
 
void Reverse(char *pBegin, char *pEnd)
{
    if(pBegin == NULL || pEnd == NULL)
        return;
 
    while(pBegin < pEnd)
    {
        char temp = *pBegin;
        *pBegin = *pEnd;
        *pEnd = temp;
 
        pBegin ++, pEnd --;
    }
}
 
 
 
char* ReverseSentence(char *pData)
{
    if(pData == NULL)
        return NULL;
 
    char *pBegin = pData;
 
    char *pEnd = pData;
    while(*pEnd != '\0')
        pEnd ++;
    pEnd--;
 
    // Reverse the whole sentence
    Reverse(pBegin, pEnd);
 
    // Reverse every word in the sentence
    pBegin = pEnd = pData;
    while(*pBegin != '\0')
    {
        if(*pBegin == ' ')
        {
            pBegin ++;
            pEnd ++;
        }
        else if(*pEnd == ' ' || *pEnd == '\0')
        {
            Reverse(pBegin, --pEnd);
            pBegin = ++pEnd;
        }
        else
        {
            pEnd ++;
        }
    }
 
    return pData;
}	
int main()
{
	char p[] = "Coding Inspiration - My Coding Experiences.";
 
	printf("%s",ReverseSentence(p));
 
	return 0;
}
 
