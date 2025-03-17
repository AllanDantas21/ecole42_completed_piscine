CC = gcc
CFLAGS = -Wall -Wextra -Werror

TESTS = ex00_test ex01_test ex02_test ex03_test ex04_test ex05_test ex06_test ex07_test ex08_test

all: $(TESTS)

ex00_test: ex00_test.c
	$(CC) $(CFLAGS) -o $@ $<

ex01_test: ex01_test.c
	$(CC) $(CFLAGS) -o $@ $<

ex02_test: ex02_test.c
	$(CC) $(CFLAGS) -o $@ $<

ex03_test: ex03_test.c
	$(CC) $(CFLAGS) -o $@ $<

ex04_test: ex04_test.c
	$(CC) $(CFLAGS) -o $@ $<

ex05_test: ex05_test.c
	$(CC) $(CFLAGS) -o $@ $<

ex06_test: ex06_test.c
	$(CC) $(CFLAGS) -o $@ $<

ex07_test: ex07_test.c
	$(CC) $(CFLAGS) -o $@ $<

ex08_test: ex08_test.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TESTS)

run: all
	@echo "======== RUNNING ALL TESTS ========"
	@for test in $(TESTS); do \
		echo "\n======== $$test ========"; \
		./$$test; \
	done

.PHONY: all clean run
