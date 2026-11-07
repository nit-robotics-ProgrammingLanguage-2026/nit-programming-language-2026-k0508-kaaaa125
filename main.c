#include <stdio.h>

int main(void) {
    int n;
    
    // 入力の受け取り（必要に応じてエラーチェック等を追加してください）
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    
    // 1. n が負のとき
    if (n < 0) {
        printf("Error\n");
    }
    // 2. n が 0 のとき
    else if (n == 0) {
        printf("No\n");
    }
    // 3. n が正のとき
    else {
        int matched = 0; // 条件に当てはまったかどうかのフラグ
        
        // 独立して判定し、順番につなげて表示する
        if (n % 3 == 0) {
            printf("Up");
            matched = 1;
        }
        if (n % 5 == 0) {
            printf("Go");
            matched = 1;
        }
        if (n % 7 == 0) {
            printf("!!");
            matched = 1;
        }
        
        // どれにも当てはまらなければ「No」
        if (!matched) {
            printf("No");
        }
        
        printf("\n");
    }
    
    return 0;
}