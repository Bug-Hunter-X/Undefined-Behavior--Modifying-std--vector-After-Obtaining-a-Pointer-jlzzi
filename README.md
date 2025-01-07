# Undefined Behavior in C++: Modifying std::vector After Obtaining a Pointer
This repository demonstrates a common yet subtle C++ error involving undefined behavior.  Modifying a `std::vector` after obtaining a raw pointer to its elements can lead to unpredictable results, crashes, or memory corruption.  The example showcases the problem and provides a solution.

**The Problem:**
The `bug.cpp` file contains code that retrieves a raw pointer to the beginning of a `std::vector`. After this, it modifies the vector, invalidating the pointer. Accessing the pointed-to memory after the vector has been resized results in undefined behavior.

**The Solution:**
The `bugSolution.cpp` file demonstrates safer approaches to working with `std::vector` elements, avoiding the use of raw pointers.  Using iterators is the safest method.