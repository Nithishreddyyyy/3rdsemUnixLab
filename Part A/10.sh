echo enter range
read -p"Enter start: " num1
read -p"Enter end: " num2
echo prime numberts between $num1 and $num2 are:
while  test $num1 -le  $num2
do
	flag=0
	i=2
	while test $i -lt $num1
	do
		if test `expr $num1 % $i` -eq 0
		then
			flag=1
			break
		else
			i=`expr $i + 1`
		fi
	done
	if test $flag -eq 0
	then
		echo $num1
	fi
	num1=`expr $num1 + 1`
done
