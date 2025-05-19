# Week 1

Before we get into details about the simulator, or even start coding, it's a good idea to learn (or revise) the fundamentals of object-oriented programming. 

### Section 1.1: Understanding Classes

- Check out chapters 14 and 15 of [learncpp.com](https://www.learncpp.com/). It gets very in-depth information and you don't need to know everything, but looking at the example code is very useful. 

- You will learn different ways to structure your code, as well as how to implement your way of structuring in c++. Even if you're already familiar with classes, it's pretty informative so I suggest skimming through it

### Section 1.2: How to code projects across multiple files

- For object oriented programming, it's a good idea to organize projects across multiple files, and have header files as well. 

- Check out chapters 2.11, 2.12, 7.8, 7.10 for information on how to deal with code spanning across multiple files (the rest of chapters 2 and 7 are also useful, but mainly this)

### Section 1.3: Compiling and running multifile projects

- Running g++ commands each time in terminal is a possibility but is painful. We have Makefiles which will help us for this. They automate the compilation process, and recompiles only the ones required if you change them.

- [Here](https://makefiletutorial.com/) is a nice tutorial for Makefile. Again you might not the whole thing, but it's a good idea to learn as much as you can.

- [This](https://github.com/fromtimeimportsleep/Multifile-Project) is an example of a multifile project. Go through it, and make sure you understand which files import which ones, and how do the dependencies work. 

- Understand the Makefile, and are the dependencies present in the Makefile correct? Try changing some lines in each file and check that the Makefile recompiles only the required file.
