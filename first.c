#include <stdio.h>
#include <string.h>

int iMkabaka();

int main(){
	
	char cTep='0';
	char cTr01,cTr02;
	printf("\n**********       ��ӭʹ��     **********\n");
	printf("\n����֮�£��ս����У�����֮�£���Ϊ���С�\n");
	printf("\n׼����..................................\n");

	cTr01='0';
	printf("\n׼�����ˡ�����a���롣");
	while(  cTr01 !=  'q' ){
		cTr02='0';
		printf("����q�˳�\n");
		
		cTr01=getchar();
		getchar();
		switch(cTr01){
		case 'a':
			
			
			
			while( cTr02 != 'q' ){
			printf("\n�������ϣֵ\n");
			iMkabaka();
			printf("Ҫ����\n");
			printf("a.����\tq.��\t\n");
			cTr02=getchar();
			getchar();
			}
			
			break;

		case 'q':
			printf("\n************    �ټ���    ************\n");
			getchar();
			getchar();
			return 0;
		default:
			printf("�����ˣ�������\n");
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
// �ĸģ����鷵��һ���ַ���