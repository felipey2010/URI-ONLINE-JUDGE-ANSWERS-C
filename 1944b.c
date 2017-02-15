#include <stdio.h>

char v[99999] = { 'F', 'A', 'C', 'E' };

int main(){
	int N,i, s, t;
	char r1[2], r2[2], r3[2], r4[2];

	while(scanf("%d", &N) && N != 0){
        s = 0, t = 4;
        for(i = 0; i < N; i++){
		scanf("%s%s%s%s", r1, r2, r3, r4);

		if (r1[0] == v[t-1] && r2[0] == v[t-2] && r3[0] == v[t-3] && r4[0] == v[t-4]) {
			t -= 4;
			if (t == 0)
				v[0] = 'F', v[1] = 'A', v[2] = 'C', v[3] = 'E', t = 4;
			s++;
		} else {
			v[t] = r1[0], t++, v[t] = r2[0], t++, v[t] = r3[0], t++, v[t] = r4[0], t++;
		}
        }
	printf("%d\n", s);
	}
	return 0;
}
