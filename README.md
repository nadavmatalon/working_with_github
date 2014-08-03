Create a directory where you'll be keeping all your projects (~/Projects, ~/dev, ~/coding or something like this)

(in the “home” directory)

mkdir ~/dev

*Create a directory "command-line" in your projects folder

(in the “home” directory)

mkdir ~/dev/command-line


Initialise a git repository inside it

(in the “home” directory)

cd dev/command-line

git init
 

Create a README file with the following content: "This is a list of some of the most useful shell commands"

(in the “command-line” directory)

touch README.md

echo “This is a list of some of the most useful shell commands” >> README.md


Add it to the repo and commit it

git add README.md

git commit -m “first commit of README.md file”



Create a repo with the same name on Github


(created “command-line” repo in under my login in github website)


Create a remote in your local repo called "origin" pointing to your Github repo

git remote add origin https://github.com/nadavmatalon/command-line.git


Verify that the remote actually exists and points to the right location

git remote -v


Push local changes to Github

git push -u origin master


Verify that you can now see your repository on Github (and note how Github displays your README file by default as the project description)

(check)


Now create a file called "mv" in your local repo. 

touch mv


Commit it locally and push the changes to Github.

git add mv

git commit -m “first commit of mv file”

git push -u origin master


Go to Github and find that file there. 

(found)


Edit it by putting the description of the "mv" shell command inside, in your own words. Don't copy the man page, just write what you know about the "mv" command. Commit the changes on Github.

(description written in file in Github)


Pull the changes from Github. 

git pull


Cat the file locally to verify that you pulled the change, so the file is not empty anymore.

(checked)


Do the same for commands "cp", "grep", "wc" and "ps". Use meaningful commit messages that describe well what you are doing.

touch cp

git add cp

git commit -m “first commit of cp file”

git push

(edited cp in github and committed changes there) 

git pull

cat cp

——

touch grep

git add grep

git commit -m “first commit of grep file”

git push

(edited grep in github and committed changes there)

git pull

cat grep

——


touch wc

git add wc

git commit -m “first commit of wc file”

git push

(edited wc in github and committed changes there) 

git pull

cat wc

——

touch ps

git add ps

git commit -m “first commit of ps file”

git push

(edited ps in github and committed changes there) 

git pull

cat ps



You should have 11 commits by now: the initial one plus two commits (one local and one done on github) for every command.

Verify this by viewing the commit log locally and on Github. Both logs should be in sync. Make sure they are in sync before proceeding to the next step!


Delete the local repository by removing the folder

rm -rf command-line

(-rf means force remove recessively, i.e. even if has content and all sub-folders)


Go to your repo on Github, copy the clone url and clone the repository locally, recreating it

(copied clone url from github:
https://github.com/nadavmatalon/command-line.git)

in terminal (small variations):

git clone git://github.com/nadavmatalon/command-line.git

Look at the list of commits. Check that there are no missing commits. Your repo should be in exactly the same as it was before you deleted it.

in terminal:

git hist

Now delete one of the files in the local repository and commit the change.

touch test_file

git add test_file

git commit -m “test_file for testing deleting file on local and pushing to master”

(note that:

had to  re-establish remote url link between master and origin - using:

git remote set-url origin https://github.com/nadavmatalon/command-line.git

git remote set-url origin [get the SSH clone url from git hub]



git push -u origin master


Push to Github and verify that you don't see the deleted file there.

git commit -am “pushing change of deleting test file (using -am)”

git push -u origin master


