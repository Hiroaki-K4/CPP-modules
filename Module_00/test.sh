#!/bin/bash

COLOR_RESET="\033[m"
COLOR_RED="\033[31m"
COLOR_GREEN="\033[32m"

check_result() {
	if [ $? -ne 0 ]; then
		printf "${COLOR_RED}%s:%s %s${COLOR_RESET}\n" "$1" "$2" ' [ERROR]'
		exit 1
	fi
	printf "${COLOR_GREEN}%s:%s %s${COLOR_RESET}\n" "$1" "$2" ' [OK]'
}

# Test ex00
echo "~~~~~Test ex00~~~~~"
cd ex00
make > /dev/null
check_result "make"
make clean > /dev/null
check_result "make clean"
make re > /dev/null
check_result "make re"
make fclean > /dev/null
check_result "make fclean"

rm -rf ../test/result/ex00
mkdir -p ../test/result/ex00
make > /dev/null
for fp in `ls ../test/case/ex00`; do
    while read line
	do
        eval ${line} >> ../test/result/ex00/$fp
	done < ../test/case/ex00/$fp
    ./megaphone >> ../test/result/ex00/$fp
	diff ../test/result/ex00/$fp ../test/answer/ex00/$fp
	check_result "ex00" $fp
done

# Test ex01
echo "~~~~~Test ex01~~~~~"
cd ../ex01
make > /dev/null
check_result "make"
make clean > /dev/null
check_result "make clean"
make re > /dev/null
check_result "make re"
make fclean > /dev/null
check_result "make fclean"
