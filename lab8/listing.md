
root@LAPTOP-I8SU6MHL:~/MAI_labs# cd lab8
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# touch main.c
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# emacs main.c
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# cat main.c
#include <studio.h>
int main() {
  int count = 0;
  for (int i=0, i<3 + 1; i++)
    {
      count = count + i;
    }
  printf("%d\n", count);
  return 0;
}
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# gcc -std=c99 -Wall -pedantic main.c
main.c:1:10: fatal error: studio.h: No such file or directory
    1 | #include <studio.h>
      |          ^~~~~~~~~~
compilation terminated.
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# emacs main.c
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# gcc -std=c99 -Wall -pedantic main.c
main.c: In function ‘main’:
main.c:4:18: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘<’ token
    4 |   for (int i=0, i<3 + 1; i++)
      |                  ^
main.c:4:29: error: expected ‘;’ before ‘)’ token
    4 |   for (int i=0, i<3 + 1; i++)
      |                             ^
      |                             ;
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# emacs main.c
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# gcc -std=c99 -Wall -pedantic main.c
main.c: In function ‘main’:
main.c:6:13: warning: division by zero [-Wdiv-by-zero]
    6 |       i = i / 0
      |             ^
main.c:6:16: error: expected ‘;’ before ‘count’
    6 |       i = i / 0
      |                ^
      |                ;
    7 |       count = count + i;
      |       ~~~~~
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# cat main.c
#include <stdio.h>
int main() {
  int count = 0;
  for (int i=0; i < 3 + 1; i++)
    {
      i = i / 0
      count = count + i;
    }
  printf("%d\n", count);
  return 0;
}
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# emacs main.c
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# cat main.c
#include <stdio.h>
int main() {
  int count = 0;
  for (int i=0; i < 3 + 1; i++)
    {
      i = i / 1
      count = count + i;
    }
  printf("%d\n", count);
  return 0;
}
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# gcc -std=c99 -Wall -pedantic main.c
main.c: In function ‘main’:
main.c:6:16: error: expected ‘;’ before ‘count’
    6 |       i = i / 1
      |                ^
      |                ;
    7 |       count = count + i;
      |       ~~~~~
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# emacs main.c
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# gcc -std=c99 -Wall -pedantic main.c
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# cat main.c
#include <stdio.h>
int main() {
  int count = 0;
  for (int i=0; i < 3 + 1; i++)
    {
      i = i / 1;
      count = count + i;
    }
  printf("%d\n", count);
  return 0;
}
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# chmod +x a.out
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# ./a.out
6

# gcc -std=c99 -Wall -pedantic main.c - используется для проверки программы
# chmod +x a.out - елаем файл исполняемым
# ./a.out запускаем его

# можно так же выявить ошибки через gdb

#include <stdio.h>
int main(){
  int count = 0;
  for (int i=0; i<3 + 1; i++)
    {
      i = i /0;
      count = count + i;
    }
  printf("%d\n", count);
  return 0;
}
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# gcc -std=c99 -Wall -pedantic main.c
main.c: In function ‘main’:
main.c:6:13: warning: division by zero [-Wdiv-by-zero]
    6 |       i = i /0;
      |             ^
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# chmod +x a.out
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# ./a.out
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# gdb a.out
GNU gdb (Ubuntu 12.1-0ubuntu1~22.04) 12.1
Copyright (C) 2022 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from a.out...
(No debugging symbols found in a.out)
(gdb) run a.out
Starting program: /root/MAI_labs/lab8/a.out a.out
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".

Program received signal SIGFPE, Arithmetic exception.
0x000055555555516e in main ()
[4]+  Stopped                 gdb a.out
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# emacs main.c
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# chmod +x a.out
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# cat main.c
#include <stdio.h>
int main(){
  int count = 0;
  for (int i=0; i<3 + 1; i++)
    {
      i = i / 1;
      count = count + i;
    }
  printf("%d\n", count);
  return 0;
}
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# ./a.out
Floating point exception
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# gcc -std=c99 -Wall -pedantic main.c
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# chmod +x a.out
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab8# ./a.out

#ошибка была показана в 
Program received signal SIGFPE, Arithmetic exception. - арифмитическая ошибка(деление нa 0)

# Отчет по лабораторной работе № 8
## по курсу "Фундаментальная информатика"
