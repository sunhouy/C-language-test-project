# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fff()
{
	int n[20] = {};
	n[0] = 1; n[1] = 1;
	for (int i = 2; i < 20; i++) {
		n[i] = n[i - 1] + n[i - 2];
	}
	for (int i = 0; i < 20; i++) {
		if(i%5==0&&i!=0)
			printf("\n");
		printf("%d ", n[i]);
	}
}

int main22() {

        int n, find;
        scanf_s("%d", &n);
        int num[1000];
        for (int i = 0; i < n; i++) {
            scanf_s("%d", &num[i]);
        }
        scanf_s("%d", &find);
        for (int i = 0; i < n; i++) {
            if (find == num[i]) {
                printf("%d", i + 1);
                return 0;
            }
        }
        printf("-1");
        return 0;
        /*********End**********/
      
}

int mainsaad()
{
    int n, index, num[1000],min=0;
	scanf_s("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &num[i]);
    }
    for (int i = 0; i < n; i++) {
        if(num[i]<min||i==0){
            min=num[i];
            index=i;
		}
    }

	printf("%d %d", index + 1, min);
}


int erweishuzu() {
    int a[3][2];
    for(int i=0; i<3;i++){
        for(int j=0;j<2;j++){
			a[i][j] = i + j;
			printf("%d ", a[i][j]);
        }
	}
    
    return 0;
}


int main() {
	int n, value[100];
	int low, high, mid, key;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value[i]);
    }
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high) {
		mid = (low + high) / 2;
        if (value[mid] == key) {
            break;
        }
        else if (value[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (low <= high) {
		printf("%d", mid);
    }
    else {
		printf("None");
    }
    return 0;
}