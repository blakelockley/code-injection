Located on a hypothetical server is a program intended to take a password as input from the user through a client and print out the secret code name stored "securely" as plaintext in the contents of the flag.txt file.

As hackers we don’t know the password but fortunately for us the programmer who wrote the code did not bother to worry about safely taking input from the user and has left a vulnerability in their code.

As we want to find the contents of the trivial flag.txt sitting on the server we will need to inject and execute shell code that can allow us to view its contents. 

Details on code injection: http://www.informit.com/articles/article.aspx?p=430402&seqNum=6
