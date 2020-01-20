#include <cstdio>
#include <deque>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#define MAX 100001
using namespace std;
deque<int> F[MAX];
int v[MAX];
void dfs(int x, int d) {
	for (int i = 0; i<F[x].size(); i++) {//���X�C�@�Ӥp�ĻP����
		if (v[F[x][i]] == 0) {
			v[F[x][i]] = d + 1;
			dfs(F[x][i], d + 1);
		}
	}
}

int main() {
	int a, b, node, n, max;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i<n; i++) {
			F[i].clear();
		}
		for (int i = 1; i<n; i++) {//�إߵL�V��
			scanf("%d %d", &a, &b);
			F[a].push_back(b);
			F[b].push_back(a);
		}
		memset(v, 0, sizeof(v));
		v[0] = 1;
		dfs(0, 1);  //��X�̻����t�@�Ӻ��I
		max = -1;
		for (int i = 0; i < n; i++) {
			if (v[i] > max) {
				max = v[i];
				node = i;
			}
		}
		memset(v, 0, sizeof(v));
		v[node] = 1;
		dfs(node, 1);  //�q�̻������I�A��M�̪����|�����סA�N�O����
		for (int i = 0; i < n; i++) {
			if (v[i] > max) {
				max = v[i];
			}
		}
		printf("%d\n", max-1);
	}
}

