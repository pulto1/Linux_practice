#include <stdio.h>
#include <signal.h>

void sigcb(int sig)
{
  printf("get a signal is: %d\n", sig);
}

int main()
{
  struct sigaction act;
  act.sa_flags = 0;
  act.sa_handler = sigcb;

  struct sigaction oact;

  sigaction(SIGINT, &act, &oact);
  
  while(1)
  {}

  return 0;
}
