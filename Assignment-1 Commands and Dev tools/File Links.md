Practice : links
1. Create two files named winter.txt and summer.txt, put some text in them.

2. Create a hard link to winter.txt named hlwinter.txt.

3. Display the inode numbers of these three files, does the hard links have the same inode?

4. Use the find command to list the two hardlinked files

5. Everything about a file is in the inode, except two things : name them!

6. Create a symbolic link to summer.txt called slsummer.txt.

7. Find all files with inode number 2. What does this information tell you ?

8. Look at the directories /etc/init.d/ /etc/rc2.d/ /etc/rc3.d/ ... do you see the links ?

9. Look in /lib with ls -l...

10. Use find to look in your home directory for regular files that do not(!) have one hard link.


Answers

1.
touch winter.txt  summer.txt
cat winter.txt
name
cat summer.txt
class

2.
ln winter.txt hlwinter.txt

3.
ls -li winter.txt summer.txt hlwinter.txt

4.
find . -inum xyz #replace xyz with the inode number

5.
The name of the file is in a directory and the contents is somewhere on the disk.

6.
ln -s summer.txt slsummer.txt

7.
It informs us that it has more than one inode table (one for every formatted partition + virtual file systems)

8.
ls -l /etc/init.d
ls -l /etc/rc2.d
ls -l /etc/rc3.d

9.
ls -l /lib

10.
find ~ ! -links 1 -type f
