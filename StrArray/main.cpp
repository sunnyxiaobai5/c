#include <stdio.h>
#define MAXSTRLEN 255
typedef char ElemType;
typedef ElemType SString[MAXSTRLEN+1];

void StrAssign(SString &T,ElemType chars[])
{
	int i=0;
	while(chars[i]!='\0')
	{
		T[++i]=chars[i-1];
	}
	T[i+1]='\0';
	T[0]=i;
}
void StrCopy(SString &T,SString S)
{
	int i=0;
	while(S[i]!='\0')
	{
		T[i]=S[i];
		i++;
	}
	T[i]='\0';
}
int StrEmpty(SString S)
{
	return (S[0]==0);
}
int StrCopare(SString S,SString T)
{
	int i=0;
	while(S[++i]!='\0' && T[++i]!='\0')
	{
		if(S[i]>T[i])
			return 1;
		else if(S[i]<T[i])
			return -1;
		else if(i>S[0])
			return 0;
	}
}
int StrLength(SString S)
{
	return S[0];
}
int GetElem(SString L,int i, ElemType &e)
{
    return 0;
}

int main()
{


	return 0;
}
