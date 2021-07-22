#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
  sigset_t set, oset;
  
  sigemptyset(&set);
  sigemptyset(&oset);

  sigaddset(&set, 2);
  sigaddset(&set, 40);

  sigprocmask(SIG_SETMASK, &set, &oset);  
 
  printf("my pid is: %d\n", getpid());
  while(1)
  {}

  return 0;
}
