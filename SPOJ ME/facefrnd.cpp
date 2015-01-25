#define MAXN 10000
#include<cstdio>
#include<cstdlib>
using namespace std;

int friends[MAXN];

int main() {
    int t;
    scanf("%d", &t);
    
    int sol = 0;
    for (int qwertz = 0; qwertz < t; ++qwertz) {
        int id;
        scanf("%d", &id);
        if (friends[id] == 1) --sol;
        friends[id] = -1;

        int m;
        scanf("%d", &m);
        for (int i = 0; i < m; ++i) {
            scanf("%d", &id);
            if (!friends[id]) {
                ++sol;
                friends[id] = 1;
            }
        }
    }
    printf("%d\n", sol);
    
    return 0;
}
