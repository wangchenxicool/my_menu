#ifndef _MYCONIO_H
#define _MYCONIO_H

#define KEY_UP 65
#define KEY_DOWN 66
#define KEY_ENTER 10


int getch();
int menu (const char **menu, int start_row);
char ** dirGetInfo (const char *pathname);

#endif

