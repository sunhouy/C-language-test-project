#include <stdio.h>
int maiji() {
	int gongji, muji, xiaoji;
	for (gongji = 0; gongji< 100; gongji++) {
		for (muji = 0; muji < 100; muji++) {
			for (xiaoji = 0; xiaoji < 100; xiaoji++) {
				if (gongji + muji + xiaoji == 100 && gongji * 5 + muji * 3 + xiaoji * (1.0 / 3) == 100) {
					printf("������%dֻ��ĸ����%dֻ��С����%dֻ\n", gongji, muji, xiaoji);
				}
			}
		}

	}
	return 0;
}