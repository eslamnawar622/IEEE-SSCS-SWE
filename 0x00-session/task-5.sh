gcc all_in_one.c -o main
./main < numbers.txt > output.txt 2> error.txt
cat numbers.txt
cat outout.txt
cat error.txt

 
// we can't say     ./main < numbers.txt
                    ./main > output.txt 2> error.txt 


