printf "\033c\033[41;30m\n"
	for n in $(seq 0 50)
	do
		printf "%s," "$n"
		nn=$((RANDOM/640))
		printf "%s\n" "$nn"

	done