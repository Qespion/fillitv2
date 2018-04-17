i=1
while [ $i -lt $1 ]
do
	echo "${i}v test:"
	./fillit tests/${i}v.fillit && echo "" && ./w_fill tests/${i}v.fillit && echo "\n\n\n"
	sleep 2s
	((i++))
done