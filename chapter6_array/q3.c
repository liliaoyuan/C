#include <stdio.h>

int main() {
    for (int i = 0; i < 6; i++) {               // 控制行數，共6行
        for (char ch = 'F'; ch >= 'F' - i; ch--) {  // 從F往A遞減，依行數決定邊界
            printf("%c", ch);
        }
        printf("\n");                           // 換行
    }
    return 0;
}
