Practise2: Working with files

1. List the files in the /bin directory
Ans:
ls /bin


2. Display the type of file of /bin/cat, /etc/passwd and /usr/bin/passwd.
Ans:
file /bin/cat /etc/passwd /usr/bin/passwd
   
   
3. Use files LFS.png dummy.pdf 

3a.Display the type of file of wolf.jpg and dummy.pdf
Ans:
file wolf.png dummy.pdf 

3b.Rename LFS.png to wolf.pdf
Ans:
mv LFS.png wolf.pdf

3c.Display the type of file of wolf.pdf and dummy.pdf.'
Ans:
file  wolf.pdf dummy.pdf
   
   
4. Create a directory ~/touched and enter it.
Ans:
mkdir ~/touched 
cd ~/touched

5. Create the files today.txt and yesterday.txt in touched.
Ans:
touch today.txt yesterday.txt
   
   
6. Change the date on yesterday.txt to match yesterday's date.
Ans:
touch -t 202010010855 yesterday.txt

   
7. Copy yesterday.txt to copy.yesterday.txt
Ans:
cp yesterday.txt  copy.yesterday.txt
   
   
8. Rename copy.yesterday.txt to kim
Ans:
mv copy.yesterday.txt  kim
   
9. Create a directory called ~/testbackup and copy all files from ~/touched into it.
Ans:
mkdir ~/testbackup
cp -r ~/touched/  ~/testbackup
   
10. Use one command to remove the directory ~/testbackup and all files in it.
Ans:
rm -rf ~/testbackup
    
    
11. Create a directory ~/etcbackup and copy all *.conf files from /etc into it. Did you include all subdirectories of /etc ?
Ans:
mkdir ~/etcbackup; cp /etc/*.conf ~/etcbackup
No subdirectories of /etc are included into ~/etcbackup because only .conf files are copied to ~/etcbackup
              
12. Use rename to rename all *.conf files to *.backup .
Ans:
touch 1.conf 2.conf 
rename 's/conf/backup/' *.conf
