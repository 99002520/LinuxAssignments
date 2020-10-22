Practice1: Working with directories

1. Display your current directory.

Ans: 
pwd
  
2. Change to the /etc directory.

Ans: 
cd /etc
  
3. Now change to your home directory using only three key presses.

Ans:
cd   
   
4. Change to the /boot/grub directory using only eleven key presses.

Ans:
cd /boot/grub 
Using tab button
Step 1. cd /bo(tab)		cd/boot/
Step 2. cd /boot/g(tab)		cd /boot/grub
Total 11 Key Presses.
   
   
5. Go to the parent directory of the current directory.

Ans:
 cd ..

6. Go to the root directory.

ANs:
cd/   
   
7. List the contents of the root directory.
Ans:
ls

bin   cdrom  etc   lib    lib64   lost+found  mnt  proc  run   snap  sys  usr
boot  dev    home  lib32  libx32  media       opt  root  sbin  srv   tmp  var


8. List a long listing of the root directory.
ANs:
ls -l
output: total 24
	   lrwxrwxrwx   1 root root     7 oct 14 09:14 usr/bin
	   drwxr-xr-x   3 root root  4096 oct 14 09:15 boot
	   drwxrwxr-x   2 root root  4096 oct 14 09:16 cdrom
	   drwxr-xr-x  20 root root  4540 oct 14 09:17 Desktop
	   drwxr-xr-x 143 root root 12288 oct 14 09:19 etc
	   drwxr-xr-x   4 root root  4096 oct 15 09:15 home

9. Stay where you are, and list the contents of /etc.
Ans:
 ls /etc
 output: lists all the files present in /etc directory
   
   
10. Stay where you are, and list the contents of /bin and /sbin.
Ans:
 ls /bin /sbin
    output: /bin:    list all files under /bin
            /sbin:   list all files under /bin
            
            
11. Stay where you are, and list the contents of ~.
Ans:
 ls ~
    output: Desktop    Downloads   Music     Public  Templates
            Documents  googletest  Pictures  snap    Videos
            

12. List all the files (including hidden files) in your home directory.
Ans:
ls -al ~
    output: lists all the files including the hidden files in the home directory
            total 132
	    drwxr-xr-x 20 training training  4096 oct 14 09:15 .
	    drwxr-xr-x  4 root     root      4096 oct 14 09:15 ..
	    -rw-------  1 training training 15531 oct 14 09:15 .bash_history
	    -rw-r--r--  1 training training   220 oct 14 09:19 .bash_logout
	    -rw-r--r--  1 training training  3771 oct 14 09:19 .bashrc
	    drwxr-xr-x 18 training training  4096 oct 14 09:20 .cache


13. List the files in /boot in a human readable format.
Ans:
 ls -lh /boot
    output:   total 186
	      -rw-r--r-- 1 root root 233K oct 14 09:15 config-5.4.0-47-generic
	      -rw-r--r-- 1 root root 233K oct 14 09:15 config-5.4.0-48-generic
	      drwxr-xr-x 4 root root 4.0K oct 14 09:15 grub
	      lrwxrwxrwx 1 root root   27 oct 14 09:15 initrd.img -> initrd.img-5.4.0-48-generic
	      -rw-r--r-- 1 root root  77M oct 14 09:15 initrd.img-5.4.0-47-generic
	      -rw-r--r-- 1 root root  77M oct 14 09:15 initrd.img-5.4.0-48-generic


14. Create a directory testdir in your home directory.
    Solution:training@training-OptiPlex-5040:/$ mkdir ~/testdir
    		(testdir directory is created successfully in the home(~) directory)
    
    
15. Change to the /etc directory, stay here and create a directory newdir in your home directory.
Ans:
 mkdir ~/newdir
    
16. Create in one command the directories ~/dir1/dir2/dir3 (dir3 is a subdirectory from dir2,and dir2 is a subdirectory from dir1 ).
Ans:
 mkdir -p ~/dir1/dir2/dir3
    
    
17. Remove the directory testdir.
Ans:
rmdir ~/testdir
    
    
   
18. Open manual page for bash and read about pushd and popd by searching in manpage.
Ans:
		man bash
	      /pushd (type /pushd to search)
	      n  (multiple times to go for next find result)
	      /popd
	      n
