Practice7: shell variables
1. Use echo to display Hello followed by your username. (use a bash variable!)

Ans:
echo Hello $USR

2. Create a variable answer with a value of 42.

Ans:
var=42
echo $var
42

3. Copy the value of $LANG to $MyLANG.

Ans:
MyLANG=$LANG

4. List all current shell variables.

Ans:
set
set|more on Ubuntu/Debian


5. List all exported shell variables.


Ans:
env
export
declare -x


6. Do the env and set commands display your variable ?

Ans:
env | more
set | more

7. Destroy your answer variable.

Ans:
unset answer

8. Create two variables, and export one of them.

Ans:
var=5; var1=10
export var1=10

9. Display the exported variable in an interactive child shell.

Ans:
bash
echo $var1

10. Create a variable, give it the value 'Dumb', create another variable with value 'do'. Use echo and the two variables to echo Dumbledore.

Ans:
var1=Dumb; var2=do

echo ${var1}le${var2}re



11. Find the list of backslash escaped characters in the manual of bash. Add the time to your PS1 prompt.

Ans:
PS1='\t \u@\h \W$ '
