echo Two file names are $1 and $2
s1=`ls -l $1 | cut -c 2-10`
s2=`ls -l $2 | cut -c 2-10`

if test $s1 = $s2
then
    echo permissions are identical
    echo They are : $s1
else
    echo permissions are not identical
    echo Permission of first: $s1
    echo Permission of second: $s2
fi
