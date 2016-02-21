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
    "═════════════",
    "     [0] 打开文件...",
    "     [1] 保存文件...",
    "     [2] 删除文件...",
    "     [3] 写数据到芯片",
    "     [4] 读芯片数据",
    "     [5] 从文件读...",
    "     [6] 通道检查...",
    "     [q] 退出菜单模式",
    "═════════════",
    NULL,
};

/**
 * @brief    
 *
 * @return  
 */
int main (int argc, char *argv[])
{
    /* 进入主循环 */
    while (1)
    {
        printf ("【 主菜单 】");

        switch (menu (menu_main, 3))
        {
        case -1:
            // 退出
            printf ("\n◆have exit <main menu>\n");
            return 0;
        case 0:
            printf ("【打开文件】");
            break;
        case 1:
            printf ("【保存文件】");
            break;
        case 2:
            printf ("【删除文件】");
            break;
        case 3:
            // 写数据
            printf ("◆数据写入OK！");
            break;
        case 4:
            printf ("【读数据】");
            break;
        case 5:
            printf ("【从文件读】");
            break;
        case 6:
            printf ("【通道检查】");
            break;
        default:
            printf ("menu-default!");
        }
    }
}
