the project measures how long it takes to dynamically allocate different sizes of memory blocks using malloc() in C++. It’s useful for observing how memory allocation time scales with size.

📋 What It Does
Allocates memory blocks from 1 byte up to 9,000,000 bytes, increasing in steps of 100,000 bytes.

Measures the time (in milliseconds) it takes to allocate each block.

on the graph prints the size and duration for each allocation.

where the x is the number of bytes requested from malloc()
and y is time taken by malloc() to perform that allocation, measured in milliseconds.

![image](https://github.com/user-attachments/assets/c2a56d07-d522-475e-bd06-90e18d7bd0d2)
