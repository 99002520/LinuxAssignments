practice: filters
1. Put a sorted list of all bash users in bashusers.txt.


2. Put a sorted list of all logged on users in onlineusers.txt.



3. Make a list of all filenames in /etc that contain the string conf in their filename.


4. Make a sorted list of all files in /etc that contain the case insensitive string conf in their filename.



5. Look at the output of /sbin/ifconfig. Write a line that displays only ip address and the subnet mask.




6. Write a line that removes all non-letters from a stream.



7. Write a line that receives a text file, and outputs all words on a separate line.


8. Write a spell checker on the command line. (There may be a dictionary in /usr/share/dict/ .)


Answers

1.
grep bash /etc/passwd | cut -d: -f1 | sort > bashusers.txt

2.
who | cut -d' ' -f1 | sort > onlineusers.txt

3.
ls /etc | grep conf

4.
ls /etc | grep -i conf | sort

5.
/sbin/ifconfig | head -2 | grep 'inet ' | tr -s ' ' | cut -d' ' -f3,5

6.
cat file1
This is, yes really! , a text with ?&* too many str$ange# characters ;-)

cat text | tr -d ',!$?.*&^%#@;()-'
This is yes really  a text with  too many strange characters

7.
cat file1
this is my namme

cat file1 | tr ' ' '\n'
this 
is
my
name

8.

echo "This is my name " > file

cat > DICT
my 
name
is 
this

 cat file | tr 'A-Z ' 'a-z\n' | sort | uniq | comm -23 - DICT

