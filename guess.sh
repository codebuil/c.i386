printf "\033c\033[41;30m\n"
n=$(($RANDOM/639))
#printf "%s\n" "$n"
w=1
printf "guess a number?\n"
while ./express $w
do
	printf "wat number?\n"
	read l
	if ./express $(expr $l '=' $n)
		then
			printf "you win\n"
			w=0
	fi
	if ./express $(expr $l '>' $n)
		then
			printf "you number is big\n"
	fi
	if ./express $(expr $l '<' $n)
		then
			printf "you number is less\n"
	fi
done