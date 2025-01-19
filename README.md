# C Pointer Practice Plan

## Schedule: 17-01-25 to 21-01-25

### Day 1: Foundation Building

#### Topics to Learn:
1. **Review Memory Architecture**
   - Stack vs. Heap Memory:
     - Stack: Automatic memory allocation, function call management, faster access.
     - Heap: Dynamic memory allocation, requires manual management, slower access.

2. **Variable Scope and Storage Classes**
   - Understand variable lifetimes and visibility: `auto`, `static`, `extern`, `register`.
   - Practice identifying where variables are stored in memory.

3. **Primitive and Derived Data Types**
   - Explore memory allocation patterns for `int`, `float`, `char`, `double`, and derived types (`arrays`, `structs`, etc.).
   - Hands-on: Write programs to calculate the sizes of these types using the `sizeof()` operator.

4. **Arrays and Memory Representation**
   - Study how arrays are represented in memory and how element addresses are calculated (`array[i] = *(array + i)`).
   - Practice iterating through arrays using both subscript and pointer notation.

#### Hands-On Exercises:
1. Visualize memory for variables and arrays (e.g., use print statements for addresses).
2. Create a program that uses `sizeof()` to find the size of various types and arrays.
3. Implement and visualize array traversal using pointers.
4. Compare stack allocation and heap allocation with small examples.
5. Write a program to demonstrate `static` vs. `auto` variables.

#### End-of-Day Quiz:
- Example Questions:
  1. What is the difference between stack and heap memory?
  2. Explain how static storage affects variable lifetime.
  3. How are array elements accessed in memory using pointers?

---

### Day 2: Core Pointer Concepts

#### Topics to Learn:
1. **Pointer Fundamentals**
   - Pointer declaration (`int *p`), initialization (`p = &var`), and obtaining memory addresses (`&` operator).

2. **Pointer Operations**
   - Understand pointer dereferencing (`*p`) and how pointers reference memory.
   - Examples:
     - Assigning values using `*p`.
     - Updating values of variables using pointers.

3. **Null and Void Pointers**
   - Null pointers: How to initialize (`p = NULL`) and why they are used.
   - Void pointers: Basics and casting to specific types.

4. **Debugging and Common Pitfalls**
   - Examples of pointer misuse:
     - Dereferencing uninitialized pointers.
     - Memory leaks with heap allocation.
   - Debugging tools: `gdb`, `valgrind`.

#### Hands-On Coding Exercises:
1. Write a program to demonstrate pointer initialization and dereferencing.
2. Create a program to show pointer arithmetic with arrays.
3. Use pointers to swap two variables.
4. Build a function to return the sum of array elements using pointers.
5. Experiment with null and void pointers in different scenarios.

#### Assignment:
- Write a program to accept an array of integers and display the values using both array and pointer notations.

---

### Day 3: Advanced Applications

#### Topics to Learn:
1. **Pointer Arithmetic**
   - Deep dive into pointer increment/decrement and type-size considerations.
   - Visual examples: Show how pointer addition skips bytes based on type size.

2. **Pointers and Strings**
   - Use pointers to manipulate strings: `char *ptr = "Hello";`.
   - Implement basic string functions (`strlen`, `strcpy`) with pointers.

3. **Dynamic Memory Management**
   - Functions: `malloc`, `calloc`, `realloc`, `free`.
   - Example:
     ```c
     int *ptr = (int *)malloc(5 * sizeof(int)); // Allocates memory for 5 integers
     free(ptr); // Releases memory
     ```

4. **Function Pointers**
   - Basics: Declaring and using function pointers.
   - Example:
     ```c
     void print(int x) { printf("%d\n", x); }
     void (*func_ptr)(int) = &print;
     func_ptr(10); // Calls print(10)
     ```

#### Advanced Exercises:
1. Implement pointer-based traversal of a 2D array.
2. Write a program to concatenate two strings using pointers.
3. Build a program that dynamically allocates memory for an array and computes its average.
4. Experiment with function pointers to call different functions dynamically.

#### Final Project:
- **Create a Dynamic Library Manager:**
  - Allocate memory for book details using structures.
  - Use pointers to traverse, modify, and deallocate the data.

---

## How to Navigate This Repository and Project

1. **Folder Structure:**
   - The repository will contain folders corresponding to the topics covered in this plan.
   - A folder named `final_projects` will contain the final project:
     - **Dynamic Library Manager:** A program to allocate memory for book details using structures and pointers.

2. **Using the Repository:**
   - Clone the repository to your local machine:
     ```bash
     git clone <repository-url>
     ```
   - Navigate through the folders to find examples and exercises:
     ```bash
     cd <topic-folder>
     ```
   - Compile and run the programs to practice:
     ```bash
     gcc <program.c> -o <output>
     ./<output>
     ```

3. **Final Project:**
   - Once the `final_projects` folder is created, you will find the **Dynamic Library Manager** program there. This program will demonstrate dynamic memory allocation and pointer usage for managing book details.

Feel free to explore and practice as you go!
