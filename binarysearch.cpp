#include <stdio.h>
int nhiphan (a[], int t ,int p, int x){
	
	if (r >= l){
		int mid = (l + r)/2
		if (a[mid] == x)
		return mid;
		if (a[mid] > x)
		return nhiphan (a[], l, mid - 1, x);
		if (a[mid] < x)
		return nhiphan (a[], r, mid + 1, x);
	}
	return -1;
}
int main(void) {
  int a[] = {2, 3, 4, 10, 40};
  int n = sizeof(a) / sizeof(a[0]);
  int x = 10;
  int result = nhiphan(a, 0, n - 1, x);
  if (result == -1)
    printf("ko tim thay", x, result);
  else
    printf("%d xuat hien tai chi so %d", x, result);
  return 0;
