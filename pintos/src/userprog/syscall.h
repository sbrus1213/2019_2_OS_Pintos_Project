#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

void syscall_init (void);

void halt (void);
void exit (int);
pid_t exec (const char *);
int wait (pid_t);
int read (int, void *, unsigned);
int write (int, const void *, unsigned);

int fibonacci (int);
int sum_of_four_int (int, int, int, int);


#endif /* userprog/syscall.h */
