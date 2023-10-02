# Отчет по лабораторной работе № 2
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Исмаилова Камила

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Bash, linux terminal
2. **Цель работы**: разобраться с Bash, изучить несколько утилит, познакомится с понятем удаленная машина
3. **Задание **: 
- Опробовать следующие команды:
    - who
    - pwd
    - ls
    - cd
    - cp
    - mv
    - rm
    - cat
    - ps
    - tail
    - head
    - grep
    - history
    - mkdir
    - rmdir
    - sudo
    - echo
    - ssh
    - scp
    - ssh-keygen
    - ssh-copy-id
- Использовать основные команды
- Сохранить листинг в файл
- Заархивировать
- Отправить на удаленную машину, там разархивировать
- Скачать разархивированный файл к себе на машину
- Составить отчет с листингом в формате markdown
- Выложить на github через merge веток
4. **Идея, метод, алгоритм решения задачи**: просмотр всех команд, тестовая попытка в терминале, разбор архиватора и удаленной машины(поплакать)
5. **Сценарий выполнения работы**: просмотр и праработка тем на семинаре, помощь зала(ютуб, сайты)                                  |

6. **Протокол**: 
```

root@LAPTOP-I8SU6MHL:~# cd MAI_labs
root@LAPTOP-I8SU6MHL:~/MAI_labs# who
root@LAPTOP-I8SU6MHL:~/MAI_labs# whoami
root
root@LAPTOP-I8SU6MHL:~/MAI_labs# type -a pwd
pwd is a shell builtin
pwd is /usr/bin/pwd
pwd is /bin/pwd
root@LAPTOP-I8SU6MHL:~/MAI_labs# pwd
/root/MAI_labs
root@LAPTOP-I8SU6MHL:~/MAI_labs# pwd--help
pwd--help: command not found
root@LAPTOP-I8SU6MHL:~/MAI_labs# pwd --help
pwd: pwd [-LP]
    Print the name of the current working directory.

    Options:
      -L        print the value of $PWD if it names the current working
                directory
      -P        print the physical directory, without any symbolic links

    By default, `pwd' behaves as if `-L' were specified.

    Exit Status:
    Returns 0 unless an invalid option is given or the current directory
    cannot be read.
root@LAPTOP-I8SU6MHL:~/MAI_labs# pwd ==versioun
/root/MAI_labs
root@LAPTOP-I8SU6MHL:~/MAI_labs# ls
FETCH_HEAD  README.md  lab1  master
root@LAPTOP-I8SU6MHL:~/MAI_labs# ls -a
.  ..  .git  FETCH_HEAD  README.md  lab1  master
root@LAPTOP-I8SU6MHL:~/MAI_labs# ls -d
.
root@LAPTOP-I8SU6MHL:~/MAI_labs# git checkout -b stick
fatal: A branch named 'stick' already exists.
root@LAPTOP-I8SU6MHL:~/MAI_labs# git branch --delete stick
error: Cannot delete branch 'stick' checked out at '/root/MAI_labs'
root@LAPTOP-I8SU6MHL:~/MAI_labs# mkdir noneed
root@LAPTOP-I8SU6MHL:~/MAI_labs# rmdir noneed
root@LAPTOP-I8SU6MHL:~/MAI_labs# mkdir lab2
root@LAPTOP-I8SU6MHL:~/MAI_labs# touch what.txt
root@LAPTOP-I8SU6MHL:~/MAI_labs# echo pancakes
pancakes
root@LAPTOP-I8SU6MHL:~/MAI_labs# echo i am tired...so tired
i am tired...so tired
root@LAPTOP-I8SU6MHL:~/MAI_labs# mv what.txt something/txt
mv: cannot move 'what.txt' to 'something/txt': No such file or directory
root@LAPTOP-I8SU6MHL:~/MAI_labs#  mv what.txt something.txt
root@LAPTOP-I8SU6MHL:~/MAI_labs# ls
FETCH_HEAD  README.md  lab1  lab2  master  something.txt
root@LAPTOP-I8SU6MHL:~/MAI_labs# mv something.txt lab2
root@LAPTOP-I8SU6MHL:~/MAI_labs# ls
FETCH_HEAD  README.md  lab1  lab2  master
root@LAPTOP-I8SU6MHL:~/MAI_labs# rm something.txt
rm: cannot remove 'something.txt': No such file or directory
root@LAPTOP-I8SU6MHL:~/MAI_labs# cd lab2
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# rm something.txt
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# touch thing.txt
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# vim thing.txt
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# cat thing.txt
Life is what happens when you’re busy making other plans.
– John Lennon.
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# cat -n thing.txt
     1  Life is what happens when you’re busy making other plans.
     2  – John Lennon.
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# vim thing.txt
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# ps
    PID TTY          TIME CMD
   1454 pts/0    00:00:04 bash
   1626 pts/0    00:00:01 ps
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# head thing.txt
Life is what happens when you’re busy making other plans.
– John Lennon

there is mistake, maybe delete it?


jjjdv


oh my
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2#  head thing.txt -n6
Life is what happens when you’re busy making other plans.
– John Lennon

there is mistake, maybe delete it?


root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# tail thing.tx -n6
tail: cannot open 'thing.tx' for reading: No such file or directory
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# tail thing.txt -n6

jjjdv


oh my
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2#  head thing.txt -n6
Life is what happens when you’re busy making other plans.
– John Lennon

there is mistake, maybe delete it?


root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# tail thing.tx -n6
tail: cannot open 'thing.tx' for reading: No such file or directory
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# tail thing.txt -n6

jjjdv


oh my

root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# grep o -n thing.txt
1:Life is what happens when you’re busy making other plans.
2:– John Lennon
10:oh my
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# history | grep.head
grep.head: command not found
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# history | grep head
  669  head thing.txt
  673  history | grep.head
  674  history | grep headroot@LAPTOP-I8SU6MHL:~# cd MAI_labs
root@LAPTOP-I8SU6MHL:~/MAI_labs# who
root@LAPTOP-I8SU6MHL:~/MAI_labs# whoami
root
root@LAPTOP-I8SU6MHL:~/MAI_labs# type -a pwd
pwd is a shell builtin
pwd is /usr/bin/pwd
pwd is /bin/pwd
root@LAPTOP-I8SU6MHL:~/MAI_labs# pwd
/root/MAI_labs
root@LAPTOP-I8SU6MHL:~/MAI_labs# pwd--help
pwd--help: command not found
root@LAPTOP-I8SU6MHL:~/MAI_labs# pwd --help
pwd: pwd [-LP]
    Print the name of the current working directory.

    Options:
      -L        print the value of $PWD if it names the current working
                directory
      -P        print the physical directory, without any symbolic links

    By default, `pwd' behaves as if `-L' were specified.
 Exit Status:
    Returns 0 unless an invalid option is given or the current directory
    cannot be read.
root@LAPTOP-I8SU6MHL:~/MAI_labs# pwd ==versioun
/root/MAI_labs
root@LAPTOP-I8SU6MHL:~/MAI_labs# ls
FETCH_HEAD  README.md  lab1  master
root@LAPTOP-I8SU6MHL:~/MAI_labs# ls -a
.  ..  .git  FETCH_HEAD  README.md  lab1  master
root@LAPTOP-I8SU6MHL:~/MAI_labs# ls -d
.
root@LAPTOP-I8SU6MHL:~/MAI_labs# git checkout -b stick
fatal: A branch named 'stick' already exists.
root@LAPTOP-I8SU6MHL:~/MAI_labs# git branch --delete stick
error: Cannot delete branch 'stick' checked out at '/root/MAI_labs'
root@LAPTOP-I8SU6MHL:~/MAI_labs# mkdir noneed
root@LAPTOP-I8SU6MHL:~/MAI_labs# rmdir noneed
root@LAPTOP-I8SU6MHL:~/MAI_labs# mkdir lab2
root@LAPTOP-I8SU6MHL:~/MAI_labs# touch what.txt
root@LAPTOP-I8SU6MHL:~/MAI_labs# echo pancakes
pancakes
root@LAPTOP-I8SU6MHL:~/MAI_labs# echo i am tired...so tired
i am tired...so tired
root@LAPTOP-I8SU6MHL:~/MAI_labs# mv what.txt something/txt
mv: cannot move 'what.txt' to 'something/txt': No such file or directory
root@LAPTOP-I8SU6MHL:~/MAI_labs#  mv what.txt something.txt
root@LAPTOP-I8SU6MHL:~/MAI_labs# ls
FETCH_HEAD  README.md  lab1  lab2  master  something.txt
root@LAPTOP-I8SU6MHL:~/MAI_labs# mv something.txt lab2
root@LAPTOP-I8SU6MHL:~/MAI_labs# ls
FETCH_HEAD  README.md  lab1  lab2  master
root@LAPTOP-I8SU6MHL:~/MAI_labs# rm something.txt
rm: cannot remove 'something.txt': No such file or directory
root@LAPTOP-I8SU6MHL:~/MAI_labs# cd lab2
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# rm something.txt
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# touch thing.txt
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# vim thing.txt
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# cat thing.txt
Life is what happens when you’re busy making other plans.
– John Lennon.
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# cat -n thing.txt
     1  Life is what happens when you’re busy making other plans.
     2  – John Lennon.
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# vim thing.txt
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# ps
    PID TTY          TIME CMD
   1454 pts/0    00:00:04 bash
   1626 pts/0    00:00:01 ps
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# head thing.txt
Life is what happens when you’re busy making other plans.
– John Lennon

there is mistake, maybe delete it?


jjjdv


oh my
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2#  head thing.txt -n6
Life is what happens when you’re busy making other plans.
– John Lennon

there is mistake, maybe delete it?


root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# tail thing.tx -n6
tail: cannot open 'thing.tx' for reading: No such file or directory
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# tail thing.txt -n6

jjjdv


oh my

root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# grep o -n thing.txt
1:Life is what happens when you’re busy making other plans.
2:– John Lennon
10:oh my
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# history | grep.head
grep.head: command not found
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# history | grep head
  669  head thing.txt
  673  history | grep.head
  674  history | grep head
root@LAPTOP-I8SU6MHL:~# ssh-keygen
Generating public/private rsa key pair.
Enter file in which to save the key (/root/.ssh/id_rsa):
/root/.ssh/id_rsa already exists.
Overwrite (y/n)? y
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in /root/.ssh/id_rsa
Your public key has been saved in /root/.ssh/id_rsa.pub
The key fingerprint is:
SHA256:eY3Bf9aBTLRCioX2crLcWuUkbi/XLp7Bfkk8VMKFwqE root@LAPTOP-I8SU6MHL
The key's randomart image is:
+---[RSA 3072]----+
|        ...o+oo. |
|       oo.+oo+o. |
|      ...Eo..+o. |
|       o = B.. ..|
|      . S B = o .|
|       o *.. *   |
|        + .oo o  |
|       . ..+o+   |
|          +++.   |
+----[SHA256]-----+
root@LAPTOP-I8SU6MHL:~# ssh-copy-id k_ismailova@185.5.249.140
/usr/bin/ssh-copy-id: INFO: Source of key(s) to be installed: "/root/.ssh/id_rsa.pub"
/usr/bin/ssh-copy-id: INFO: attempting to log in with the new key(s), to filter out any that are already installed
/usr/bin/ssh-copy-id: INFO: 1 key(s) remain to be installed -- if you are prompted now it is to install the new keys
k_ismailova@185.5.249.140's password:

Number of key(s) added: 1

Now try logging into the machine, with:   "ssh 'k_ismailova@185.5.249.140'"
and check to make sure that only the key(s) you wanted were added.

root@LAPTOP-I8SU6MHL:~# ssh k_ismailova@185.5.249.140
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Sun Oct  1 19:01:34 2023 from 83.220.236.163
k_ismailova@vds2476450:~$ log out
Could not find command-not-found database. Run 'sudo apt update' to populate it.
log: command not found
k_ismailova@vds2476450:~$ logout
Connection to 185.5.249.140 closedo
t@LAPTOP-I8SU6MHL:~# touch fine.txt
root@LAPTOP-I8SU6MHL:~# tar -cf txt.tar *.txt
root@LAPTOP-I8SU6MHL:~# tar -x f txt.tar -o
tar: Refusing to read archive contents from terminal (missing -f option?)
tar: Error is not recoverable: exiting now
root@LAPTOP-I8SU6MHL:~# tar -x -f txt.tar -o
root@LAPTOP-I8SU6MHL:~# ls
MAI_labs  README.md  fine.txt  pyth  snap  txt.tar
root@LAPTOP-I8SU6MHL:~# tar -x - txt.tar -C fine.txt
tar: Refusing to read archive contents from terminal (missing -f option?)
tar: Refusing to read archive contents from terminal (missing -f option?)
tar: Error is not recoverable: exiting now
root@LAPTOP-I8SU6MHL:~# tar -x -f txt.tar -C fine.txt
tar: fine.txt: Cannot open: Not a directory
tar: Error is not recoverable: exiting now
root@LAPTOP-I8SU6MHL:~# tar -tf txt.tar
fine.txt
root@LAPTOP-I8SU6MHL:~# hostname -I
172.27.97.152
root@LAPTOP-I8SU6MHL:~# scp txt.tar k_ismailova@185.5.249.140:/root/txt.tar
scp: /root/txt.tar: Permission denied
root@LAPTOP-I8SU6MHL:~# scp txt.tar k_ismailova@185.5.249.140:~/txt.tar
txt.tar                                                                               100%   10KB 103.4KB/s   00:00
root@LAPTOP-I8SU6MHL:~# ~/MAI_labs/lab2# ssh k_ismailova@185.5.249.140
-bash: /root/MAI_labs/lab2#: No such file or directory
root@LAPTOP-I8SU6MHL:~# cd MAI_labs
root@LAPTOP-I8SU6MHL:~/MAI_labs# cd lab2
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# scp txt.tar k_ismailova@185.5.249.140:~/txt.tar
txt.tar                                                                               100%   20KB 215.6KB/s   00:00
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# scp txt.tar k_ismailova@185.5.249.140:~/txt.tar
txt.tar                                                                               100%   20KB 208.2KB/s   00:00
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# hostname -I
172.27.97.152
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2# scp txt.tar k_ismailova@185.5.249.140:~/txt.tar
txt.tar                                                                               100%   20KB 177.0KB/s   00:00
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab2#  ssh k_ismailova@185.5.249.140
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Mon Oct  2 00:21:11 2023 from 83.220.236.163
k_ismailova@vds2476450:~$ ls -la
total 52
drwxr-xr-x  4 k_ismailova k_ismailova  4096 Oct  2 01:17 .
drwxr-xr-x 30 root        root         4096 Sep 10 18:09 ..
-rw-------  1 k_ismailova k_ismailova   112 Oct  2 00:25 .bash_history
-rw-r--r--  1 k_ismailova k_ismailova   220 Sep 10 18:09 .bash_logout
-rw-r--r--  1 k_ismailova k_ismailova  3771 Sep 10 18:09 .bashrc
drwx------  2 k_ismailova k_ismailova  4096 Sep 18 11:07 .cache
-rw-r--r--  1 k_ismailova k_ismailova   807 Sep 10 18:09 .profile
drwx------  2 k_ismailova k_ismailova  4096 Sep 18 11:07 .ssh
-rw-r--r--  1 k_ismailova k_ismailova 20480 Oct  2 01:19 txt.tar
k_ismailova@vds2476450:~$ tar xvf txt.tar
listing.md
k_ismailova@vds2476450:~$ ls-1
Could not find command-not-found database. Run 'sudo apt update' to populate it.
ls-1: command not found
k_ismailova@vds2476450:~$ ls -l
total 32
-rw-r--r-- 1 k_ismailova k_ismailova  9383 Oct  2 00:07 listing.md
-rw-r--r-- 1 k_ismailova k_ismailova 20480 Oct  2 01:19 txt.tar
k_ismailova@vds2476450:~$ logout
Connection to 185.5.249.140 closed.

```
7. **Замечания автора** по существу работы: были трудности с архивацией
8. **Выводы**: в ходе работы мы узнали много команд, которые в качестве флагов могут справляться с различными задачами, расширили наши познания ( поплакали) , самым интересным и точно небходимым-я считаю, работу на удаленной машине. Было сложно, но нтересно.Особенно занятно было эксперементировать с сd и grep. 
