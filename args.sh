printf "\033c\033[41;30m\n"
f=file.txt
a=$(./filename $f)
b=$(./args 0 $a)
c=$(./args 1 $a)
printf "file:%s\nextencion:%s\n" $b $c
