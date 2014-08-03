
<h2>Working with the Command Line</h2>

<h3>Makers | Week 1 | Challenge</h3>


Instructions & Answers:

Change into the temporary directory

cd /tmp

Using one command, create a directory structure "my/private/files" 

mkdir -p my/private/files


Using one command, create a directory structure "my/public/files"

mkdir -p my/public/files


Create an empty file 't-vars.env' in my/private/files

(in the "/tmp/my/private/files/" directory)

touch t-vars.env


Using command-line only add the line "List of env vars that begin with T" to the file, 
make sure it ends with a newline

(in the "/tmp/my/private/files/" directory)

echo "List of env vars that begin with T" >> t-vars.env

(to see content: less t-vars.env)


List all env variables that begin with "T" (hint: you'll need a regex that includes 
the marker of the start of the line) and append them to the end of the file

(in the "/tmp/my/private/files/" directory)

env | grep "^T" >> t-vars.env


export a new variable TESTING_MAKERS=working in such a way that it is still available when you open a new shell

export TESTING_MAKERS=working

echo "export TESTING_MAKERS=working" >> ~/.bash_profile


open a new terminal window, check that a new variable is available

echo $TESTING_MAKERS
=> working


output the count of the variables that begin with T to a new file my/public/files/t-vars.count, e.g. "Overall count: 5" (hint: you'll need to use 'command substitution' in bash)

(in “/tmp" directory)

echo Overall count: `env | grep "^T" | wc -l` >> my/public/files/t-vars.count


change the permissions of the my/private/files/t-vars.env to make sure that only the owner can read and write the file

(read & write, but not execute)

(in "/tmp/my/private/files" directory)

chmod 600 t-vars.env

(check: ls -l)

change the permissions of the my/private/files directory to make sure that only the owner can change into it

(in the "private" directory)

chmod 700 files

(check: ls -l)

give read and write permissions to all users on my/public/files/t-vars.count

(read & write, but not execute)

(in "files" directory)

chmod 666 t-vars.count

(check: ls -l)


create another file my/public/files/text-files-count.txt and output the number of text files in your home directory (recursively)  into that file

(in the "home" directory)

cd ~ 

find . -name *.txt | wc -w >> /tmp/my/files/text-files-count.txt

(same result with quotes: find . -name “*.txt” | wc -w >> /tmp/my/files/text-files-count.txt)


list all env variables sorted alphabetically and show the top 3 lines

env | sort -f | head -n3

