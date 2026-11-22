#include <cassert>

int main() {
    int chad = 2.00001 * 2.000001;
    assert(chad == 4.00002200001);  // intentionally explode
    return 0;
}