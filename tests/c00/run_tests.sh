#!/bin/bash

# Compile all test files
echo "Compiling test files..."
gcc -Wall -Wextra -Werror ex00_test.c -o ex00_test
gcc -Wall -Wextra -Werror ex01_test.c -o ex01_test
gcc -Wall -Wextra -Werror ex02_test.c -o ex02_test
gcc -Wall -Wextra -Werror ex03_test.c -o ex03_test
gcc -Wall -Wextra -Werror ex04_test.c -o ex04_test
gcc -Wall -Wextra -Werror ex05_test.c -o ex05_test
gcc -Wall -Wextra -Werror ex06_test.c -o ex06_test
gcc -Wall -Wextra -Werror ex07_test.c -o ex07_test
gcc -Wall -Wextra -Werror ex08_test.c -o ex08_test

# Run all tests
echo -e "\n======== RUNNING TEST FOR EX00 ========"
./ex00_test

echo -e "\n======== RUNNING TEST FOR EX01 ========"
./ex01_test

echo -e "\n======== RUNNING TEST FOR EX02 ========"
./ex02_test

echo -e "\n======== RUNNING TEST FOR EX03 ========"
./ex03_test

echo -e "\n======== RUNNING TEST FOR EX04 ========"
./ex04_test

echo -e "\n======== RUNNING TEST FOR EX05 ========"
./ex05_test

echo -e "\n======== RUNNING TEST FOR EX06 ========"
./ex06_test

echo -e "\n======== RUNNING TEST FOR EX07 ========"
./ex07_test

echo -e "\n======== RUNNING TEST FOR EX08 ========"
./ex08_test

# Clean up
echo -e "\nCleaning up..."
rm -f ex00_test ex01_test ex02_test ex03_test ex04_test ex05_test ex06_test ex07_test ex08_test

echo -e "\nAll tests completed."
