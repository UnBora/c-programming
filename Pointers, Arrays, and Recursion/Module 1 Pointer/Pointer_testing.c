#include <stdio.h>

int main() {
    int x = 10;     // បង្កើតអថេរ x មានតម្លៃ 10
    int *p = &x;    // p រក្សាទុកអាសយដ្ឋានរបស់ x

    printf("តម្លៃ x = %d\n", x);
    printf("អាសយដ្ឋានរបស់ x = %p\n", &x);
    printf("តម្លៃក្នុង pointer p = %p\n", p);
    printf("តម្លៃដែល p យោងទៅ ( *p ) = %d\n", *p);

    // កែតម្លៃ x តាម pointer
    *p = 99;
    printf("តម្លៃ x បន្ទាប់ពីកែតាម pointer = %d\n", x);

    return 0;
}
