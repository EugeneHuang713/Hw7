/*
����ɮפ��e�A�íp��r����
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fptr;  // �ŧi���V�ɮת�����fptr
    char ch;     // �ŧi�r���ܼ�ch�A�Ψӱ���Ū�����r��
    int count = 0; // �ŧi���count�A�Ψӭp��r����

    fptr = fopen("welcome.txt", "r");  // �}���ɮ�
    if (fptr != NULL)  // �p�Gfopen()���Ǧ^�Ȥ���NULL
    {                // �N���ɮ׶}�Ҧ��\
        while ((ch = getc(fptr)) != EOF)  // �P�_�O�_���ɮ׵���
        {
            printf("%c", ch);  // �N�r���L�X
            count++;          // �p��r����
        }
        fclose(fptr);  // �����ɮ�
        printf("\n�`�@��%d�Ӧr��\n", count);  // �L�X�r����
    }
    else  // �ɮ׶}�ҥ���
        printf("�ɮ׶}�ҥ���!!\n");
    system("pause");
    return 0;
}
