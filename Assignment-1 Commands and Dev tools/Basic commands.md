Practice: Basic Commands
1. Explain the difference between these two commands.
find /data -name "*.txt"
find /data -name *.txt

2. Explain the difference between these two statements. Will they both work when there are 200 .odf files in /data ? How about when there are 2 million .odf files ?
find /data -name "*.odf" > data_odf.txt
find /data/*.odf > data_odf.txt

3. Write a find command that finds all files created after January 30th 2010.

4. Write a find command that finds all *.odf files created in September 2009.

5. Count the number of *.conf files in /etc and all its subdirs.

6. Here are two commands that do the same thing: copy *.odf files to /backup/ . What would be a reason to replace the first command with the second ?
cp -r /data/*.odf /backup/
find /data -name "*.odf" -exec cp {} /backup/ \;

7. Create a file called loctest.txt. Can you find this file with locate ? Why not ? How do you make locate find this file ?

8. Use find and -exec to rename all .htm files to .html.

9. Issue the date command. Now display the date in YYYY/MM/DD format.

10. Issue the cal command. Display a calendar of 1582 and 1752. Notice anything special ?


Answers 
1.
When *.txt is quoted("*.txt") then the shell will not consider it. The find tool will search in the /data only for all files ending in .txt.
When *.txt is not quoted(*.txt) then the shell will search for all the files that ends with .txt that exist in the current directory. 
The find might show a different result or can also result in a syntax error.

2.
The first find command will output all .odf filenames in /data and all it's subdirectories and then the shell will redirect it to a file.
The second find will output all files named .odf in /data and will also show all the files that exist in directories named *.odf.

3.
touch -t 201001302359 marker_date
find . -type f -newer marker_date 

4.
touch -t 200908312359 marker_start
touch -t 200910010000 marker_end
find . -type f -name "*.odf" -newer marker_start ! -newer marker_end

5.
find /etc -type f -name '*.conf' | wc -l

6.
The first might fail when there are too many files to fit on one command line.

7.
updatedb

8.
find . -name '*.htm' -exec mv {} {}l \;
find . -name '*.htm*'

9.
date +"%Y-%m-%d"

10.
cal
