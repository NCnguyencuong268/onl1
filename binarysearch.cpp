#include <stdio.h>

int tk (int arr[] , int n, int x){
	int i;
	for (i=0 ; i < n ; i++)
	if (arr[i] == x)
	return i;
	return -1;

}
int main(){
	int arr[] = {2, 3, 4, 10, 40};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int kq = tk(arr, n, x);
	if(kq != -1){
		printf("xuat hien tai chi so %d", x, kq);
	}else
	{
		printf("ko co trong mang");
	}
	return 0;
}
