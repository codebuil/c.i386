grap(){
	./char $1 '*'
	printf "\n"
}

printf "\e033\033[41;30m\n"
for n in $(seq 1 10)
do
	grap $n
done 