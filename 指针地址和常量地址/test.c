#include <stdio.h>
void main()
{
	char a[]="china";
	char *p1,*p2,*p3,*p4;
	p1=a;
	p2="china";
	printf("===========================================\n");
	printf("指针所指向地址空间的内容\n\n");
	printf("a:%s\np1:%s\np2:%s\n",a,p1,p2);
	printf("指针所指向地址\n\n");
	printf("a:%x\np1:%x\np2:%x\n",(int)a,(int)p1,(int)p2);
	printf("指针的存储地址\n");
	printf("a:%x\np1:%x\np2:%x\\nn",(int)&a,(int)&p1,(int)&p2);
	p3="a";
	printf("%x\n",(int)p3);
	p4="b";
	printf("%x\n",(int)p4);
	printf("===========================================\n");
}
