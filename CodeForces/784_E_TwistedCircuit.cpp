#include <cstdio>
using namespace std;

int main() {
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	//printf("%d\n",(((a|b)&(c^d))|((b&c)^(a|d)))); // ^ | &
	//printf("%d\n",(((a&b)|(c^d))&((b|c)^(a&d)))); // ^ & |
	//printf("%d\n",(((a|b)^(c&d))|((b^c)&(a|d)))); // & | ^
	//printf("%d\n",(((a^b)|(c&d))^((b|c)&(a^d)))); // & ^ |
	printf("%d\n",(((a^b)&(c|d))^((b&c)|(a^d)))); // | ^ &
	//printf("%d\n",(((a&b)^(c|d))&((b^c)|(a&d)))); // | & ^
}

