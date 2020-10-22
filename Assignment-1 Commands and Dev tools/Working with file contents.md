Practise3:file contents


1. Display the first 12 lines of /etc/services.

Ans:
head -12 /etc/services
   
   
2. Display the last line of /etc/passwd.

Ans:
tail -1 /etc/passwd


3. Use cat to create a file named count.txt that looks like this:
	One
	Two
	Three
	Four
	Five

Ans:
cat > count.txt
             One
             Two
             Three
             Four
             Five  
               
4. Use cp to make a backup of this file to cnt.txt.

Ans:
cp count.txt cnt.txt
   
   
5. Use cat to make a backup of this file to catcnt.txt.

Ans:
cat count.txt > catcnt.txt
   
   
6. Display catcnt.txt, but with all lines in reverse order (the last line first).

Ans:
tac catcnt.txt
   
   
7. Use more to display /etc/services.

Ans:
more /etc/services
   
   
8. Display the readable character strings from the /usr/bin/passwd command.

Ans:
strings -r /usr/bin/passwd

9. Use ls to find the biggest file in /etc.

Ans:
ls -lrS /etc
   
   
10. Open two terminal windows (or tabs) and make sure you are in the same directory in both. Type echo this is the first line > tailing.txt in the first terminal, then issue tail -f tailing.txt in the second terminal. Now go back to the first terminal and type echo This is another line >> tailing.txt (note the double >>), verify that the tail -f in the second terminal shows both lines. Stop the tail -f with Ctrl-C.

Ans:
Terminal1
$ echo "this is first line" > tailing.txt
$ echo "this is second line" >> tailing.txt
               
Terminal2
$ tail -f tailing.txt 
this is first line
this is second line


11. Use cat to create a file named tailing1.txt that contains the contents of tailing.txt followed by the contents of /etc/passwd.

Ans:
cat tailing.txt > tailing1.txt
cat /etc/passwd >> tailing1.txt
    
    
12. Use cat to create a file named tailing2.txt that contains the contents of tailing.txt preceded by the contents of /etc/passwd

Ans:
cat /etc/passwd > tailing2.txt
cat tailing.txt >> tailing2.txt
              
