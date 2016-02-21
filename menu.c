#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/select.h>
#include <sys/time.h>
#include <errno.h>
#include <termios.h>
#include <dirent.h>

#include "myconio.h"

static const char *menu_main[] =
{
    "    <my_pnp for arm>      ",
    "�T�T�T�T�T�T�T�T�T�T�T�T�T",
    "     [0] ���ļ�...",
    "     [1] �����ļ�...",
    "     [2] ɾ���ļ�...",
    "     [3] д���ݵ�оƬ",
    "     [4] ��оƬ����",
    "     [5] ���ļ���...",
    "     [6] ͨ�����...",
    "     [q] �˳��˵�ģʽ",
    "�T�T�T�T�T�T�T�T�T�T�T�T�T",
    NULL,
};

/**
 * @brief    
 *
 * @return  
 */
int main (int argc, char *argv[])
{
    /* ������ѭ�� */
    while (1)
    {
        printf ("�� ���˵� ��");

        switch (menu (menu_main, 3))
        {
        case -1:
            // �˳�
            printf ("\n��have exit <main menu>\n");
            return 0;
        case 0:
            printf ("�����ļ���");
            break;
        case 1:
            printf ("�������ļ���");
            break;
        case 2:
            printf ("��ɾ���ļ���");
            break;
        case 3:
            // д����
            printf ("������д��OK��");
            break;
        case 4:
            printf ("�������ݡ�");
            break;
        case 5:
            printf ("�����ļ�����");
            break;
        case 6:
            printf ("��ͨ����顿");
            break;
        default:
            printf ("menu-default!");
        }
    }
}
