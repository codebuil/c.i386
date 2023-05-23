printrtf(){
	a='{\afs24\rtlch \ltrch\loch\fs'
	printf "%s%s\n" "$a" "$1" 
	a='\loch\f0'
	printf "%s\n" "$a"
	a='}'	
	printf "%s%s\n" "$2" "$a"
}
font(){
	a='{\fonttbl{\f0\froman\fprq2\fcharset0 Times New Roman;}{\f1\froman\fprq2\fcharset2 Symbol;}{\f2\fswiss\fprq2\fcharset0 Arial;}{\f3\froman\fprq2\fcharset0 Liberation Serif{\*\falt Times New Roman};}{\f4\fswiss\fprq2\fcharset0 Liberation Sans{\*\falt Arial};}{\f5\fmodern\fprq1\fcharset0 Liberation Mono{\*\falt Courier New};}{\f6\fmodern\fprq1\fcharset128 FreeMono;}{\f7\fnil\fprq2\fcharset0 DejaVu Sans;}{\f8\fmodern\fprq1\fcharset0 Nimbus Mono L{\*\falt Courier New};}{\f9\fnil\fprq2\fcharset0 FreeSans;}{\f10\fswiss\fprq0\fcharset128 FreeMono;}}'
	printf "%s\n" "$a"

}
rtf(){
	a='{\rtf1\ansi\deff3\adeflang1025'
	printf "%s\n" "$a"

}
endrtf (){
	a='\par }'
	printf "%s\n" "$a"
}
body(){
	a='{\s16\sbasedon0\snext16\sl288\slmult1\sb0\sa140 Text Body;}'
	printf "%s\n" "$a"
}
txt(){
	a='{\s20\sbasedon0\snext20\sb0\sa0\dbch\af8\dbch\af5\afs20\loch\f5\fs20 Preformatted Text;}'
	printf "%s\n" "$a"
}
head(){
	a='{\s15\sbasedon0\snext16\sb240\sa120\keepn\dbch\af7\dbch\af9\afs28\loch\f4\fs28 Heading;}'
	printf "%s\n" "$a"
}
color(){
	a='{\colortbl;\red0\green0\blue128;\red0\green128\blue128;}'
	printf "%s\n" "$a"
}
style(){
	a='{\stylesheet{\s0\snext0\nowidctlpar{\*\hyphen2\hyphlead2\hyphtrail2\hyphmax0}\cf0\dbch\af7\langfe2052\dbch\af9\afs24\alang1081\loch\f3\fs24\lang2070 Normal;}'
	printf "%s\n" "$a"
}
info(){
	a='}{\info{\creatim\yr0\mo0\dy0\hr0\min0}{\revtim\yr2021\mo1\dy17\hr1\min47}{\printim\yr0\mo0\dy0\hr0\min0}{\comment rtf}{\vern67306242}}\deftab709'
	printf "%s\n" "$a"
	a='\viewscale100'
	printf "%s\n" "$a"
}
par(){
	a='{\*\ftnsep\chftnsep}\pgndec\pard\plain \s20\sb0\sa0\dbch\af8\dbch\af5\afs20\loch\f5\fs20'
	printf "%s\n" "$a"
}

printf "\033c\033[41;30m\n"
til='hello world.'
fonts=8
rtf
font
color
style
head
body
txt
info 
par
	for n in $(seq 8 50)
	do
			printrtf "$fonts" "$til"
			fonts=$n

	done
endrtf