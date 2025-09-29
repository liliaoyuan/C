#include <stdio.h>

int main(void) {
    char target_char;
    
    // 1. 提示并获取用户输入
    printf("请输入一个大写字母 (A-Z): ");
    
    // scanf前面的空格可以帮助吸收可能存在的空白符（如换行符）
    scanf(" %c", &target_char);

    // 2. 输入验证，确保用户输入的是大写字母
    if (target_char < 'A' || target_char > 'Z') {
        printf("输入错误，请输入一个大写字母。\n");
        return 1; // 返回非零值表示程序出错
    }

    // 3. 外层循环：控制行数
    //    current_row_char 代表当前行的中心字母
    for (char current_row_char = 'A'; current_row_char <= target_char; current_row_char++) {
        
        // 3.2 打印升序部分的字母 (从 A 到当前行的中心字母)
        for (char letter = 'A'; letter <= current_row_char; letter++) {
            printf("%c", letter);
        }

        // 3.3 打印降序部分的字母 (从中心字母的前一个，降序回到 A)
        for (char letter = current_row_char - 1; letter >= 'A'; letter--) {
            printf("%c", letter);
        }
        
        // 3.4 打印完一行后，换行
        printf("\n");
    }

    return 0;
}