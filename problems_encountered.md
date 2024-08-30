Problems Encountered
====

* How do I use external libraries in C?
  * Conext: I needed to use openssl, which is a open source library for cryptogrpahic algorithms.
  * Issue: Fairly simple to download the library, but did not know how to use it in my program.
  * Fix: I learned that I needed to link non-standard libraries while it's compiling. this is done by adding a simple flag.
* How do I link my headers in C?
  * Context: I wanted to create a header file and have a source file to provide implementation to the prototypes, and have other source files only include the header file while having the implementation.
  * Issue: When compiling straight from VScode it does not work, and gave compilation errors.
  * Fix: I learned how to write a "makefile" to do the compilation by hand. Additonally learned how to compile and link C files together. used this stack overflow disscusion [link] (link https://stackoverflow.com/questions/18548157/c-header-files-and-compilation-linking).
