cmp $1 $2 2>>Err
if test $? -eq 0
then
	echo files are equal
	rm $2
else
	echo files are not equal
fi
