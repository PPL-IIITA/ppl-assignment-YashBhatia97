# PPL Assignment-YashBhatia97
## CREATED BY-Yash Bhatia (IIT2015105) SECTION - 'B'
<img src="https://img.shields.io/badge/language-C++-brightgreen.svg"/>

## How to run

### To create library (lets say lib_file.a) execute-
>
```
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
g++ -c makepair.cpp
g++ -c findgfsearch.cpp
ar rvs lib_file.a gengift.o matching.o pairing.o couple.o giftalloc.o boys.o genboys.o gengirls.o girls.o sorting.o makepair.o findgfsearch.o
```

## Steps
Steps: Generate random input
>
```	 
g++ genboys.cpp
./a.out
g++ gengirls.cpp
./a.out
```
### To run q3 execute the following command:
```
>g++ q3.cpp lib_file.a
>./a.out
> Output in "q3output.txt"
```
### To run q4 execute the following command:
```
>g++ q4.cpp lab_file.a
>./a.out
> Output in "q4output.txt"
```
### To run q6 execute the following command:
```
>g++ q6.cpp lab_file.a
>./a.out
> Output in "q6output.txt"
```
### To run q7 execute the following command:
```
>g++ q7.cpp lab_file.a
>./a.out
> Output in "q7output.txt"
```
### To View Couples:
>Open output.txt

### Documenation of the project can be found in -

>doc/html/index.html
### System Information
```
>Operating System - Ubuntu 16.04
>Documentaion - Doxygen
>Class Diagram - VisualParadigm
```
