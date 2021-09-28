#include <stdio.h>
#include <string.h>

int iMkabaka();

int main(){
	
	char cTep='0';
	char cTr01,cTr02;
	printf("\n**********       欢迎使用     **********\n");
	printf("\n已行之事，终将再行；将行之事，必为已行。\n");
	printf("\n准备中..................................\n");

	cTr01='0';
	printf("\n准备好了。输入a进入。");
	while(  cTr01 !=  'q' ){
		cTr02='0';
		printf("输入q退出\n");
		
		cTr01=getchar();
		getchar();
		switch(cTr01){
		case 'a':
			
			
			
			while( cTr02 != 'q' ){
			printf("\n请输入哈希值\n");
			iMkabaka();
			printf("要走吗？\n");
			printf("a.不走\tq.走\t\n");
			cTr02=getchar();
			getchar();
			}
			
			break;

		case 'q':
			printf("\n************    再见。    ************\n");
			getchar();
			getchar();
			return 0;
		default:
			printf("坏掉了，嘤嘤嘤\n");
			getchar();
			cTr01='0';
		}
	}
}

int iMkabaka(){
	 const char *base32 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567";
    int i = 0;
	char c;
    char a[33], *m = a;

	gets(m);


	
    printf ("magnet:?xt=urn:btih:");
    for (i = 0; i < 32; i += 4){
        long b0 = strchr (base32, m[i + 0]) - base32;
        long b1 = strchr (base32, m[i + 1]) - base32;
        long b2 = strchr (base32, m[i + 2]) - base32;
        long b3 = strchr (base32, m[i + 3]) - base32;
        long b = b0 << 15 | b1 << 10 | b2 << 5 | b3 ;
        printf ("%05X", b);
    }
    printf ("\n");
	getchar();
	return 0;
}
// 改改，建议返回一个字符串