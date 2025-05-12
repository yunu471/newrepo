#include <stdio.h>

void func3() {
    printf("→ Entering func3\n");
    printf("← Exiting func3\n");
}

void func2() {
    printf("→ Entering func2\n");
    func3();
    printf("← Exiting func2\n");
}

void func1() {
    printf("→ Entering func1\n");
    func2();
    printf("← Exiting func1\n");
}

int main() {
    printf("→ Entering main\n");
    func1();
    printf("← Exiting main\n");
    return 0;
}
