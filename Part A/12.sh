fun(){
	lar=$1
	if test $lar -lt $2
	then
		lar=$2
	fi
	if test $lar -lt $3
	then
		lar=$3
	fi
	return $lar
}
read -p"enter 3 numbers" n1 n2 n3
fun $n1 $n2 $n3
echo largest is $?
