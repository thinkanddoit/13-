#include <iostream>
#include <string>
template<typename T>
auto sum(T x) {
	return x;
}
//마지막 호출시 파라미터가 하나만 나오는 경우도 고려해주어야한다.
template<typename T, typename...Args>
auto sum(T x, Args... args) {
	return x + sum(args...);
}
int main() {
	auto x = sum(42.5, 10, 11.1f);
	std::cout << x;
	getchar();
}
