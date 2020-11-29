#include <iostream>
#include <string>
template<typename T>
auto sum(T x) {
	return x;
}
//������ ȣ��� �Ķ���Ͱ� �ϳ��� ������ ��쵵 ������־���Ѵ�.
template<typename T, typename...Args>
auto sum(T x, Args... args) {
	return x + sum(args...);
}
int main() {
	auto x = sum(42.5, 10, 11.1f);
	std::cout << x;
	getchar();
}
