/* Stub implementations for bare-metal development */

#include <stdint.h>
#include <stdarg.h>

/* Semihosting monitor init stub */
void initialise_monitor_handles(void)
{
    /* Stub: no actual semihosting setup needed for bare-metal */
}

/* Simple printf stub - just discards output */
int printf(const char *format, ...)
{
    (void)format;
    return 0;
}

/* puts stub */
int puts(const char *s)
{
    (void)s;
    return 0;
}

/* Minimal syscall stubs for newlib compatibility */
int _close(int file)
{
    (void)file;
    return 0;
}

int _fstat(int file, void *st)
{
    (void)file;
    (void)st;
    return 0;
}

int _isatty(int file)
{
    (void)file;
    return 1;
}

int _lseek(int file, int ptr, int dir)
{
    (void)file;
    (void)ptr;
    (void)dir;
    return 0;
}

int _read(int file, char *ptr, int len)
{
    (void)file;
    (void)ptr;
    return len;
}

int _write(int file, char *ptr, int len)
{
    (void)file;
    (void)ptr;
    return len;
}

void _exit(int status)
{
    (void)status;
    while(1);
}

void *_sbrk(int incr)
{
    (void)incr;
    return (void *)-1;
}

/* Exit stub */
void exit(int status)
{
    (void)status;
    while(1);
}

/* Entry point for bare-metal */
extern int main(void);
void _start(void)
{
    main();
    while(1);
}
