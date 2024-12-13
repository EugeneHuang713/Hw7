/*
顯示檔案內容，並計算字元數
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fptr;  // 宣告指向檔案的指標fptr
    char ch;     // 宣告字元變數ch，用來接收讀取的字元
    int count = 0; // 宣告整數count，用來計算字元數

    fptr = fopen("welcome.txt", "r");  // 開啟檔案
    if (fptr != NULL)  // 如果fopen()的傳回值不為NULL
    {                // 代表檔案開啟成功
        while ((ch = getc(fptr)) != EOF)  // 判斷是否為檔案結尾
        {
            printf("%c", ch);  // 將字元印出
            count++;          // 計算字元數
        }
        fclose(fptr);  // 關閉檔案
        printf("\n總共有%d個字元\n", count);  // 印出字元數
    }
    else  // 檔案開啟失敗
        printf("檔案開啟失敗!!\n");
    system("pause");
    return 0;
}
