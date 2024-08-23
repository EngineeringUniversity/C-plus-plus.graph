# Separate Directories for Header & Source files
sch: https://www.google.com/search?q=clion+header+and+source+files+different+directories

## Discuss
- https://intellij-support.jetbrains.com/hc/en-us/community/posts/207383355-Different-directories-for-headers-and-sources-when-using-New-C-Class
- https://youtrack.jetbrains.com/issue/CPP-5980


### Favorite:
- https://youtrack.jetbrains.com/issue/CPP-14697/Improved-New-Class-Creation-Dialog-something-like-what-CodeBlocks-uses

quote:
>I started using Clion, as I was looking for an editor that integrated with CMake rather than having its own project format, before that I used an Open Source IDE Code:Blocks (http://www.codeblocks.org/) it provided a solution to all these issues by way of a Class creation wizard (see attached screenshot)
>
>This allowed for specifying a full scope class name including required namespaces i.e. A::B::MyClass (https://youtrack.jetbrains.com/issue/CPP-5948), this would result in the namespace components being used as directories in the file path, it also provides the option to create source and header in a common path (like Clion currently dose) or you can specify separate directories i.e. (https://youtrack.jetbrains.com/issue/CPP-5980). The dialog also provides an option for header guard which by default is generated based on the supplied namespace which would solve both (https://youtrack.jetbrains.com/issue/CPP-2914, https://youtrack.jetbrains.com/issue/CPP-4457).
>
>The Option for using lowercase in file name would be replaced with the type dropdown all ready part of the Clion Dialog since that provides options for filename case, however a separate option, should be added to the IDE for generating namespace directories. Most of the Class Generation from code blocks wouldn't be need since use can use live templates for that which is likely a more efficient workflow. However adding the parent class and its header path would still be useful.
