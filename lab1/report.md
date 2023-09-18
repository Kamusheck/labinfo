# Отчет по лабораторной работе № 1
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Исмаилова Камила

Работа выполнена

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: знвкомство с гитом
2. **Цель работы**: освоить базовые команды гит
3. **Задание**:
завести репозиторий (общий под все лабораторные работы с отдельной папкой под каждую лр!)
отчет с листингом в Markdown (листинг - ctrl+c -> ctrl+v из терминала с форматированием в markdown)
создать отдельную ветку в репозитории под задание
создать коммит с листингом и отчетом
смержить ветку в мейн

4. **Идея, метод, алгоритм решения задачи**: 
5. **Сценарий выполнения работы**: 
6. **Протокол**:
```

root@LAPTOP-I8SU6MHL:~# mkdir MAI_labs
root@LAPTOP-I8SU6MHL:~# cd MAI_labs
root@LAPTOP-I8SU6MHL:~/MAI_labs# git init
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint:
hint:   git config --global init.defaultBranch <name>
hint:
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint:
hint:   git branch -m <name>
Initialized empty Git repository in /root/MAI_labs/.git/
root@LAPTOP-I8SU6MHL:~/MAI_labs# git remote add origin git@github.com:Kamusheck/labinfo.git
root@LAPTOP-I8SU6MHL:~/MAI_labs# git pull
The authenticity of host 'github.com (140.82.121.4)' can't be established.
ED25519 key fingerprint is SHA256:+DiY3wvvV6TuJJhbpZisF/zLDA0zPMSvHdkr4UvCOqU.
This key is not known by any other names
Are you sure you want to continue connecting (yes/no/[fingerprint])? y
Please type 'yes', 'no' or the fingerprint: yes
Warning: Permanently added 'github.com' (ED25519) to the list of known hosts.
remote: Enumerating objects: 3, done.
remote: Counting objects: 100% (3/3), done.
remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (3/3), 589 bytes | 117.00 KiB/s, done.
From github.com:Kamusheck/labinfo
 * [new branch]      main       -> origin/main
There is no tracking information for the current branch.
Please specify which branch you want to merge with.
See git-pull(1) for details.

    git pull <remote> <branch>

If you wish to set tracking information for this branch you can do so with:

    git branch --set-upstream-to=origin/<branch> master

root@LAPTOP-I8SU6MHL:~/MAI_labs# git branch -a
  remotes/origin/main
root@LAPTOP-I8SU6MHL:~/MAI_labs# git checkout -b dev
Switched to a new branch 'dev'
root@LAPTOP-I8SU6MHL:~/MAI_labs# mkdir lab1
root@LAPTOP-I8SU6MHL:~/MAI_labs# cd lab1
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab1#
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab1#
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab1# touch report.md
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab1# vim report.md
root@LAPTOP-I8SU6MHL:~/MAI_labs/lab1#

```
7. **Замечания автора** по существу работы: было интересно, но непонятно
8. **Выводы**: В ходе проделанной работы мы ближе познакомились с Git и научились выполнять базовые команды
