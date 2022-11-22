#include<stdio.h>

template<typename Type>
Type Min(Type a, Type b) {
	if (a>b)
	{
		return b;
	}
	else
	{
		return a;
	}
}
template<>
char Min<char>(char a, char b) {
	return printf("”‰FˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ");
}
int main() {
	printf("%d\n", Min<int>(114, 514));
	printf("%f\n", Min<float>(11.4f, 51.4f));
	printf("%c\n", Min<char>(11.4f, 51.4f));
	printf("%f\n", Min<double>(11.4, 51.4));


	return 0;
}