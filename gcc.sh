printf "\033c\033[41;30m\n"
for n in $(ls $1/*.c)
do
	 printf "file: %s\n" "$n"
	bcc -ansi -o "$n.out" $n 
done 
