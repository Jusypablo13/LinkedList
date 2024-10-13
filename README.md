Linked List & Josephus Problem Implementation

This project implements a Linked List data structure and applies it to solve the Josephus Problem, a classic theoretical problem in mathematics and computer science.

Files

	•	LinkedList.cpp: This file contains the implementation of a Singly Linked List. It includes basic operations such as inserting, deleting, and traversing nodes.
	•	josefo.cpp: This file solves the Josephus Problem using the Linked List structure implemented in LinkedList.cpp. The Josephus problem involves finding a safe position in a group of people standing in a circle, where every k-th person is eliminated until only one person remains.

Josephus Problem

The Josephus problem is defined as follows:

	“There are n people standing in a circle, and every k-th person is eliminated in a sequential order until only one person remains.”

For example, if you have 7 people in a circle and every second person is eliminated, the elimination proceeds in this order:
1, 3, 5, 7, 2, 6, 4, and person 1 would be the last one remaining.

Usage

Compilation

Both the linked list and Josephus problem solution can be compiled using a standard C++ compiler. The LinkedList.cpp should be used as a utility file, while the main logic for solving the Josephus problem is contained in josefo.cpp.

To compile the files, use the following commands:

g++ LinkedList.cpp josefo.cpp -o josefo

This will generate an executable called josefo.

Running the Program

Once compiled, you can run the program by passing the number of people (n) and the step size (k) as command line arguments. For example:

./josefo 7 2

This command will solve the Josephus problem for 7 people and an elimination step of 2.

Linked List Operations

If you want to test the LinkedList.cpp file independently for basic operations, you can write a small driver code that performs operations such as:

	•	Inserting elements into the list.
	•	Traversing the list.
	•	Deleting elements from the list.

An example main function could be:

int main() {
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.display(); // Shows 1 -> 2 -> 3

    list.remove(2);
    list.display(); // Shows 1 -> 3

    return 0;
}

How It Works

	1.	Linked List Implementation:
	•	The linked list is designed as a dynamic data structure that can grow and shrink in size as elements are added or removed. Each node in the list contains a value and a pointer to the next node.
	•	Operations:
	•	Insert: Adds a node at the end of the list.
	•	Delete: Removes a node with a specific value from the list.
	•	Display: Prints the current state of the list.
	2.	Josephus Problem:
	•	Using the linked list to represent the group of people, the algorithm simulates the process of elimination by moving through the list and removing every k-th node until only one node (person) remains.
	•	The program utilizes circular linked list traversal to handle the circular nature of the Josephus problem.

Example Output

For the Josephus problem with 7 people and a step of 2, the output will look like:

Initial circle: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7
Eliminated: 2
Eliminated: 4
Eliminated: 6
Eliminated: 1
Eliminated: 5
Eliminated: 3
Survivor: 7

Requirements

	•	C++ Compiler: The code is written in standard C++, so you will need a C++ compiler (such as GCC) to compile and run the code.
	•	Makefile (Optional): A Makefile can be created for easier compilation if needed.