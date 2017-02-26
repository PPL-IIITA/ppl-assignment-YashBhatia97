#PPL Assignment-YashBhatia97
##CREATED BY-Yash Bhatia (IIT2015105) SECTION - 'B'

##How to run

###To create library (lets say lib_file.a) execute-
>```
g++ -c gengift.cpp
g++ -c matching.cpp
g++ -c pairing.cpp
g++ -c couple.cpp
g++ -c giftalloc.cpp
g++ -c boys.cpp
g++ -c genboys.cpp
g++ -c gengirls.cpp
g++ -c girls.cpp
g++ -c sorting.cpp
ar rvs lib_file.a gengift.o matching.o pairing.o couple.o giftalloc.o boys.o genboys.o gengirls.o girls.o sorting.o
```

##Steps
Steps: Generate random input
>```	 
Run g++ genboys.cpp
Run ./a.out
Run g++ gengirls.cpp
Run ./a.out
Run g++ gengift.cpp
Run ./a.out
```
###To run q1 execute the following command:
```
>g++ q1.cpp lib_fila.a
>./a.out
```
###To run q2 execute the following command:
```
>g++ q2.cpp ppl_lib
>./a.out
```
###To View Couples:
>Open output.txt

###To View K-Most Happiest and Compatible Couples:
>Open q2output.txt 
##Documenation of the project can be found in -

>doc/html/index.html

