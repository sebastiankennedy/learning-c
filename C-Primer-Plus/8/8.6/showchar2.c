/* showchar2.c -- 按行和列打印字符 */
#include <stdio.h>
void display(char cr, int lines, int width);

int main(int argc, const char * argv[])
{
    int ch;             // 要打印的字符
    int rows, cols;     // 行数和列数
    printf("Enter a character and two integers: \n");
    while ((ch = getchar())!= '\n') {
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
        while(getchar() != '\n'){
        	continue;
        }
        printf("Enter another character and two integers: \n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");
    return 0;
}

void display(char cr, int lines, int width){
    int row, col;

    for (row = 1; row <= lines; row++) {
        for (col = 1; col <= width; col++) {
            putchar(cr);
        }
        putchar('\n');  // 结束本行，开始新的一行
    }
}
