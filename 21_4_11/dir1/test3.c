#include <stdio.h>
#include <signal.h>

void sigcb(int sig)
{
  printf("get a signal is: %d\n", sig);
}

int main()
{
  signal(2, sigcb);

  while(1)
  {}

  return 0;
}
