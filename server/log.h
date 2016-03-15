#pragma once

/*

$Id: log.h,v 1.2 2007/08/13 18:50:38 devel Exp $

$Log: log.h,v $
Revision 1.2  2007/08/13 18:50:38  devel
fixed some warnings

Revision 1.1  2005/09/24 09:55:48  ssim
Initial revision

Revision 1.2  2003/10/13 14:12:18  sam
Added RCS tags


*/

void ilog(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
void elog(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
void xlog(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
void charlog(int cn, const char *format, ...) __attribute__ ((format(printf, 2, 3)));
int init_log(void);
void exit_log(void);
void elog_item(int in);
void reinit_log(void);
void log_items(int cn);
