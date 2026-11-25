#include <string>
#include <vector>

void sum_squares() {
    int acc = 0;
    for (int i = -5; i <= 5; ++i) acc += i * i;
    (void)acc;
}

void arithmetic_sum() {
    int first = 3, diff = 4, count = 9;
    int last = first + diff * (count - 1);
    int total = (first + last) * count / 2;
    (void)total;
}

void absolute_diff() {
    int a = 41, b = 90;
    int diff = (a > b) ? (a - b) : (b - a);
    (void)diff;
}

void count_multiples() {
    int count = 0;
    for (int i = 1; i <= 100; ++i) {
        if (i % 7 == 0) count += 1;
    }
    (void)count;
}

extern "C" int gentle_prism();
extern "C" void radiant_kite();
extern "C" void golden_delta();
extern "C" void ivory_summit();

int main() {
    sum_squares();
    arithmetic_sum();
    absolute_diff();
    count_multiples();
    radiant_kite();
    golden_delta();
    ivory_summit();
    return gentle_prism();
}
