Practice9: shell Pattern matching
1. Create a test directory and enter it.
Ans:
mkdir test

2. Create the following files :
file1 file10 file11 file2 File2 File3 file33 fileAB filea fileA fileAAA file( file 2
(the last one has 6 characters including a space)

Ans: 
touch file1 file10 file11 file2 File2 File3 file33 fileAB filea fileA fileAAA file( file 2

3. List (with ls) all files starting with file

Ans:
ls file*
'file('   file10  'file 2'   file33   fileA     fileAB
 file1    file11   file2     filea    fileAAA

4. List (with ls) all files starting with File
Ans:
ls File*
File2  File3

5. List (with ls) all files starting with file and ending in a number.

Ans:
ls file*[0-9]
file33 file10 file 2 file2 file1 file11

6. List (with ls) all files starting with file and ending with a letter
Ans:
ls file*[a-zA-z]
filea  fileA  fileAAA  fileAB

7. List (with ls) all files starting with File and having a digit as fifth character.

Ans:
ls file[0-9]
file1  file2

8. List (with ls) all files starting with File and having a digit as fifth character and nothing else.

Ans: 
ls File[0-9]
File2  File3

9. List (with ls) all files starting with a letter and ending in a number.
ANs:
ls [a-zA-z]*[0-9]
file1   file10   file11  'file 2'   file2   File2   File3   file33
     
10. List (with ls) all files that have exactly five characters.
      
ANs:
ls ?????
'file('   file1   file2   File2   File3   filea   fileA

11. List (with ls) all files that start with f or F and end with 3 or A.

ANs:
ls f*&&*3 || F*&&*3
'file('   file10  'file 2'   file33   fileA     fileAB
 file1    file11   file2     filea    fileAAA


12. List (with ls) all files that start with f have i or R as second character and end in a number.
ANs:
ls fi*[0-9]||fR*[0-9]
file1   file10   file11  'file 2'   file2   file33

13. List all files that do not start with the letter F.
Ans:
ls !F*
'file('   file10  'file 2'   File2   file33   fileA     fileAB
 file1    file11   file2     File3   filea    fileAAA

14. Can echo replace ls ? How can you list the files in the current directory with echo ?

Ans:
echo *

15. Is there another command besides cd to change directories ?

sol: 
