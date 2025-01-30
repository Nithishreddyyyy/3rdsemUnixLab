echo Before entering directory, the contents are:
ls
for var in $*
do
	new=`echo $var | tr '[a-z]' '[A-Z]'`
	mv $var $new
done
echo Directory contents after conversion are:
ls
