https://yuting-zhang.github.io/uva/2017/01/08/UVa-10140.html?fbclid=IwAR3BQ5FVJ7Ea5397zpDY7W4tLsLY0vrtw4eKp-csOTru9qb6W2Hu_Gh6ETc

#include <cstring>
#include <cstdio>

int visit[50001], prime[50001];
int makelist(int n)
{
	memset(visit, 0, sizeof(visit));
	int prime_count = 0;
	for (int i = 2; i < n; ++ i) {
		if (!visit[i]) {
			prime[prime_count ++] = i;
			for (int j = i+i; j < n; j += i) {
				visit[j] = 1;
			}
		}
	}
	return prime_count;
}

int plist[1000001], ans[1000001];
int calclist(int prime_count, int L, int U)
{
	memset(plist, 0, sizeof(plist));
	for (int i = 0; i < prime_count; ++ i) {
		int s = (L-1)/prime[i]+1;
		if (s < 2) s = 2;
		for (unsigned int j = s*prime[i]; j <= U; j += prime[i]) {
			plist[j-L] = 1;
		}
	}
	int ans_count = 0;
	for (unsigned int i = L; i <= U; ++ i) {
		if (i > 1 && !plist[i-L]) {
			ans[ans_count ++] = i;
		}
	}
	if (ans_count < 2)
		puts("There are no adjacent primes.");
	else {
		int max = -2147483647, min = 2147483647, mil, mir, mal, mar;
		for (int i = 1; i < ans_count; ++ i) {
			if (max < ans[i]-ans[i-1]) {
				max = ans[i]-ans[i-1];
				mal = ans[i-1]; 
				mar = ans[i];
			}
			if (min > ans[i]-ans[i-1]) {
				min = ans[i]-ans[i-1];
				mil = ans[i-1]; 
				mir = ans[i];
			}
		}
		printf("%d,%d are closest, %d,%d are most distant.\n",mil,mir,mal,mar);
	}
}

int main()
{
	int prime_count = makelist(46340);
	int L, U;
	while (~scanf("%d%d",&L,&U)) {
		calclist(prime_count, L, U);
	}
    return 0;
}