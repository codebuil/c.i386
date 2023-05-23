printpost(){
	a='moveto'
	printf "30 %d %s\n" "$1" "$a"
	a='('
	b=') show'
	printf "%s%s%s\n"  "$a" "$2" "$b"
}
font(){
	a='/Free-Mono findfont'
	printf "%s\n" "$a"
	a='scalefont'
	printf "%s %s\n" "$1" "$a"
	a='setfont'
	printf "%s\n" "$a"
}
post (){
	a='%!'PS
	printf "%s\n" "$a"
	a='%%Pages: 1'
	printf "%s\n" "$a"
	a='/Free-Mono findfont'
	printf "%s\n" "$a"
	a='scalefont'
	printf "%d %s\n" "$1" "$a"
	a='setfont'
	printf "%s\n" "$a"
	a='newpath'
	printf "%s\n" "$a"
}
endpost (){
	printf "\nshowpage\n%%%%EOF\n"
}

printf "\e033\033[41;30m\n"
til='hello world.'
fonts=8
line=800
post $fonts
	for n in $(seq 8 50)
	do
			printpost "$line" "$til"
			fonts=$n
			font $fonts
			line=$(($line-$fonts-5))
	done
endpost