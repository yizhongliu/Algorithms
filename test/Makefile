test: test_insertion_sort.o insertion_sort.o
	cc -o test test_insertion_sort.o insertion_sort.o
test_insertion_sort.o : test_insertion_sort.c
	cc -c test_insertion_sort.c -I../inc/insertion_sort -I../inc
insertion_sort.o : ../src/insertion_sort/insertion_sort.c
	cc -c ../src/insertion_sort/insertion_sort.c -I../inc/insertion_sort -I../inc

