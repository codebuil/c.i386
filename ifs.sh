printf "\e033\033[41;30m\n"
for n in $(seq 0 10)
do
	
	if ./express $(expr $n == 5)
		then
			 printf "%s\n" "$n"
	fi
done 