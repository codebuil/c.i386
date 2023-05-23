printf "\033c\033[41;36m\n"
a='/tmp/a'
b=azsxdcfvgbhnjmkqawsedrftgyhujikollkjhgfdsapoiuytrewqmnbvcxz
for n in $(./serial 0 20 1)
do
	c=$(($RANDOM/1310))
	c=$(./mid $b $c 1)
	a=$a$c
done
	echo $a
