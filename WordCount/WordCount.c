#include <stdio.h>

int main(int argc, char **argv){
	FILE *fp;
	fp = fopen(argv[argc-1], "r");
	char ch;
	int cnt = 0;
	if ( strcmp(argv[argc-2],"-c") == 0 ) {
		while( (ch = fgetc(fp)) != EOF ){
			if ( ch < 'A' || (ch > 'Z' && ch < 'a') || ch > 'z' ){
				cnt++;
			}
		}
		printf("�ַ�����%d", cnt);
	}else{
		while( (ch = fgetc(fp)) != EOF ){
			if ( ch == ' ' || ch == ',' || ch == '.') {
			cnt++;
			}
		}
		printf("��������%d", cnt);
	}
	
	return 0;
}
