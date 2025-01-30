size=5
i=0
while test $i -lt $size
do
	read -p"Enter 5 elements: " arr[i]
	i=`expr $i + 1`
done
echo array elements are: ${arr[@]}
echo enter key element
read key
flag=1
i=0
while test $i -lt $size
do
	if test "${arr[i]}" = "$key"
	then
		flag=0
		break
	fi
	i=`expr $i + 1`

done
if [ $flag -eq 0 ]
then
	echo $key is found
else
	echo not found
fi
