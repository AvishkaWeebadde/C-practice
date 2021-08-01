#include <iostream>

auto foo(bool n, bool m) {
    return n + m;
}

int main() {
    bool a = true;
    bool b = true;

    auto c = a + b + b + 1;

    std::cout << c << ", " << typeid(c).name() << '\n';
    std::cout << foo(a,b);
}