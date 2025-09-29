#include <stdio.h>

int main(void) {
    // 定义变量来存储读取到的字符
    char ch;
    // 定义一个计数器来跟踪替换次数
    int replacement_count = 0;

    // 提示用户输入
    printf("请输入一段文本，程序将在遇到 # 字符时停止：\n");

    // 使用 while 循环和 getchar() 来读取字符，直到遇到 '#'
    while ((ch = getchar()) != '#') {
        // 使用 if-else if-else 结构来判断和处理字符
        if (ch == '.') {
            // 如果是句号，替换为感叹号，并计数
            putchar('!');
            replacement_count++;
        } else if (ch == '!') {
            // 如果是感叹号，替换为两个感叹号，并计数
            // 注意：这里只算作一次替换
            putchar('!');
            putchar('!');
            replacement_count++;
        } else {
            // 如果是其他字符，直接原样输出
            putchar(ch);
        }
    }

    // 循环结束后，打印最终的报告
    printf("\n\n--- 替换报告 ---\n");
    printf("程序总共进行了 %d 次替换。\n", replacement_count);

    return 0; // 程序正常退出
}
