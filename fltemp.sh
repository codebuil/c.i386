printf "\ec\e[41;30m\n"
b=ZXY
for n in $(./serial 0 10 1)
do
	a=/tmp/ZXY$RANDOM$RANDOM$RANDOM$RANDOM$RANDOM$b
	echo $a
done

