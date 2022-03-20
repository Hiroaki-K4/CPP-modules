#!/bin/bash

COLOR_RESET="\033[m"
COLOR_RED="\033[31m"
COLOR_GREEN="\033[32m"

check_result() {
	if [ $? -ne 0 ]; then
		printf "${COLOR_RED}%s:%s %s${COLOR_RESET}\n" "$1" "$2" ' [ERROR]'
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

rm -rf ../test/result/ex01
mkdir -p ../test/result/ex01
make > /dev/null
for fp in `ls ../test/case/ex01`; do
	content=`cat ../test/case/ex01/$fp`
	eval "${content}" >> ../test/result/ex01/$fp
	diff ../test/result/ex01/$fp ../test/answer/ex01/$fp
	check_result "ex01" $fp
done

# Test ex02
echo "~~~~~Test ex02~~~~~"
cd ../ex02
make > /dev/null
check_result "make"
make clean > /dev/null
check_result "make clean"
make re > /dev/null
check_result "make re"
make fclean > /dev/null
check_result "make fclean"

make > /dev/null
./test > ex02.log
diff 19920104_091532.log ex02.log
check_result "ex02" "diff test"
rm ex02.log
make fclean > /dev/null
