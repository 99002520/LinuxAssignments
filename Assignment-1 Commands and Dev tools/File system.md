Practise4: File system
1. Does the file /bin/cat exist ? What about /bin/dd and /bin/echo. What is the type of these files ?

2. What is the size of the Linux kernel file(s) (vmlinu*) in /boot ?

3. Create a directory ~/test. Then issue the following commands:

What is Happening? Can you describe the functionality of dd, od, /dev/zero ?
4. Now issue the following command:
dd if=/dev/random of=random.txt count=1 bs=100 ; od random.txt
Can you describe the functionality of /dev/random?

5. Issue the following two commands, and look at the first character of each output line.
ls -l /dev/sd* /dev/hd*
ls -l /dev/tty* /dev/input/mou*
Can you tell the difference between block and character devices ?

6. Use cat to display /etc/hosts and /etc/resolv.conf. What is your idea about the purpose of these files ?

7. Are there any files in /etc/skel/ ? Check also for hidden files.

8. Display /proc/cpuinfo. On what architecture is your Linux running ?

9. Display /proc/interrupts. What is the size of this file ? Where is this file stored ?

10. Can you enter the /root directory ? Are there (hidden) files ?

11. Are ifconfig, fdisk, parted, shutdown and grub-install present in /sbin ? Why are these binaries in /sbin and not in /bin ?

12. Is /var/log a file or a directory ? What about /var/spool ?

13. Open two command prompts (Ctrl-Shift-T in gnome-terminal) or terminals (Ctrl-Alt-F1,Ctrl-Alt-F2, ...) and issue the who am i in both. Then try to echo a word from one terminalto the other.

14. Read the man page of random and explain the difference between /dev/random and /dev/urandom.


Answers

1.
ls /bin/cat ; file /bin/cat
ls /bin/dd ; file /bin/dd
ls /bin/echo ; file /bin/echo

2.
ls -lh /boot/vm*

3.
cd ~/test
dd if=/dev/one of=zeroes.txt count=1 bs=100
od zeroes.txt

4.
/dev/zero is a Linux special device. It can be considered a source of zeroes. we cannot send something to /dev/zero, but we can read zeroes from it.

5.
Block devices are always written to (or read from) in blocks. For hard disks, blocks of 512 bytes are usually made. Character devices act as a stream of characters (or bytes). Mouse and keyboard are typical character devices.

6.
/etc/hosts have hostnames with their IP address
/etc/resolv.conf contains the IP address of a DNS name server.

7.
Issue "ls -al /etc/skel/". Yes, there should be hidden files there.

8.
The file contains minimum of one line with Intel or other cpu.

9.
The size is zero yet the file contains data. It is not stored anywhere because /proc is a virtual file system that allows
 you to talk with the kernel. 

10.
 "cd /root". The /root directory is not accessible for normal users on modern Linux systems.

11.
it is so because those files are only meant for system administrators.

12.
Both are directories.

13.
tty-terminal: echo Hello > /dev/tty1
pts-terminal: echo Hello > /dev/pts/1

14.
man 4 random
