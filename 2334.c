#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char qnt[1000];

	while (scanf("%s", &qnt)) {
		int len = strlen (qnt), i;
		if ( qnt[0] == '-' )
			return 0;

		if ((len == 1 && qnt[0] == '0') || (len == 1 && qnt[0] == '1'))
			puts ("0");
		else {
			if (qnt[len-1] == '0'){
				i = 1;
				while(i <= len && qnt[len-i] == '0'){
					qnt[len-i] = '9';
					i++;
				}
				if(i <= len && qnt[len-i] != '0')
					qnt[len-i]--;
			}
			else
				qnt[len-1]--;

			for(i = 0; i < len; i++)
				if (!(qnt[i] == '0' && i == 0))
					printf("%c", qnt[i]);
			puts ("");
		}
	}
}
