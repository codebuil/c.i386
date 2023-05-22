grap(){
	a=$(./char $1 '**')
	./center "$a"
}

printf "\033c\033[41;30m\n"
for n in $(seq 1 10)
do
	grap $n
done 