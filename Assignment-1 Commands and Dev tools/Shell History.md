Practice8: shell history

1. Issue the command 
echo "The answer to the meaning of life, the universe and everything is 42"

Ans:
echo The answer to the meaning of life, the universe and everything is 42

2. Repeat the previous command using only two characters (there are two solutions!)

Ans:
!!
OR
!e

3. Display the last 5 commands you typed.

Ans:
history 5
111 cat
112 ls
113 ls -l
114 echo The answer to the meaning of life, the universe and everything is 42
115 history 5

4. Issue the long echo from question 1 again, using the line numbers you received from the command in question 3.

ANs:
114
echo The answer to the meaning of life, the universe and everything is 42
The answer to the meaning of life, the universe and everything is 42

5. How many commands can be kept in memory for your current shell session ?

Ans:
echo $HISTSIZE

6. Is the current session history stored to ~/.bashrc_history?

Ans:
echo $HISTFILE


7. Where are these commands stored when exiting the shell ?

Ans:
echo $HISTFILESIZE


8. How many commands can be written to the history file when exiting your current shell session ?

Ans:
HISTSIZE=3300


9. Make sure your current bash shell remembers the only 10 commands you type.

Ans:

10. When is command history written to the history file ?

Ans:
when the command is executed it writes at the last.

