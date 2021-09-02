#include <cstdint>
#include <compare>
#include <iostream>

using namespace std;

struct TestA
{
    int32_t a;
    int32_t b;

    auto operator<=>(const TestA &) const = default;
};

int main()
{
    TestA t1{1, 2}, t2{1, 3};
    cout << (t1 == t2) << ' '
         << (t1 > t2) << ' '
         << (t1 < t2) << endl;
}