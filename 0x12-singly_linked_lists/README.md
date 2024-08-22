# Linked List in C

## Overview

This project implements a simple singly linked list in C. A linked list is a dynamic data structure where each element (node) contains:
- `data`: The value stored in the node.
- `next`: A pointer to the next node in the list.

Linked lists are ideal for scenarios where the number of elements is unknown at compile-time, allowing efficient insertions and deletions.

## Features

- **Dynamic Size**: The linked list can expand or contract as needed.
- **Efficient Operations**:
  - `push`: Insert a node at the beginning of the list.
  - `printList`: Traverse and print the list.

## Project Structure

```plaintext
.
├── main.c          # Main function demonstrating linked list usage
├── linked_list.c   # Implementation of linked list functions
└── linked_list.h   # Declarations of node structure and functions

