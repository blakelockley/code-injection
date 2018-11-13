# Code Injection

Located on a hypothetical server is a program intended to take a password as input from the user through a client and print out the secret code name stored "securely" as plaintext in the contents of the flag.txt file.

As hackers we don’t know the password but fortunately for us the programmer who wrote the code did not bother to worry about safely taking input from the user and has left a vulnerability in their code. They were also so nice to turn off stack protection mechanisms default to their compiler... 

As we want to find the contents of the trivial flag.txt sitting on the server without knowning the password we will need to inject and execute shell code that can allow us to view its contents. 

The exploit can be performed by creating an input binary file containing code we would like to inject. When the program is expecting to read a password, it will instead read our malicious code into the stack memory and override the return address of the function. As a result, when the function intends to return execution to its caller it will instead move the program counter to the beginning of our injected code.

The original motivation behind this exercise came from the following chapter of [Secure Coding in C and C++: Strings](http://www.informit.com/articles/article.aspx?p=430402&seqNum=6)

The solution I used in exploit.bin was created for mac os using gcc and lldb, although the source code can be recompiled on different systems ideally this will be in a sandboxed linux environment for indivuals to 'capture the flag'.

Useful links for MacOS / OSX:
- osx sys calls: https://filippo.io/making-system-calls-from-assembly-in-mac-os-x/
- osx sys calls (list): https://sigsegv.pl/osx-bsd-syscalls/

