#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000],w[100];
	int i,j,slen,wlen,cnt=0;
	printf("��������Ը���������ĵ��ʲ�ѯ�ھ������м��������ĵ��ʡ�\n");
	printf("������һ��Ӣ�ľ���:\n");
	gets(s);
	printf("��������Ҫ��ѯ�ĵ���:\n");
	gets(w);
	strlwr(s);
	strlwr(w);
	slen=strlen(s);
	wlen=strlen(w);
	for(i=0;i<=slen-wlen;i++)
	{
		char tempw[1000];
		tempw[wlen]='\0';
		for(j=0;j<wlen;j++)
			tempw[j]=s[i+j];
		if(strcmp(tempw,w)==0)
			cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}