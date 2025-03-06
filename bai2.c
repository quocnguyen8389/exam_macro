//kết quả trả ra là 6 
//giải thích 
//x=5, y=10 => 5<10 => đúng 
// sau khi so sánh x sẽ được gọi lần 2 với giá trị x++ , tương đương x=6
// vậy kết quả trả ra là 6
#include <stdio.h>
static inline int min (int a, int b) {
    return a < b ? a : b;
}
int main() {
    int x = 5, y = 10;
    int z = min(x++, y);
    printf("%d\n", z);
    return 0;
}