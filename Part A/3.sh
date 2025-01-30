echo file is $1
if test -e $1
then
	echo file exists
	if test -f $1
	then
		echo is Regular
	elif test -d $1
	then
		echo is Directory
	elif test -c $1
	then
		echo is Charecter Device
	elif test -b $1
	then
		echo is a Block Device
	elif test -p $1
	then
		echo is a Pipe file
	elif test -s $1
	then
		echo is a Symbolic file
	fi
else
echo file doesnt exist
fi
