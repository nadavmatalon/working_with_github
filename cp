cp (terminal command) -

The “cp” command is used to copy files or directories from one location to another in the file system.

The basic syntax for the “cp” command is:

cp [source] [target]

source = file_name.file_type / directory_name
target = file_name.file_type / directory_name

eg:

cp example_file ~/example_file

This command can also be used to rename the copied files or directories in the new location:

cp example_file ~/example_file_2

Note the a file or directory cannot be copied onto itself.

The -n (do not overwrite) flag can be used to prevent overwriting of an existing file with the same name in the target destinations.

The -R flag can be used to copy a source folder with its entire subtree content.

The -v (verbose) flag can be used to show the files as they are copied. 
