printf "\ec\e[41;30m\n"
f='/tmp/'$(./rand)
p=pass1
./crypt "Hello World." "$p" > $f
h=$(cat $f)
./decrypt "$h" "$p" 
rm $f
