echo arguments given are : $*
rev=""
for var in $*
do
    rev="$var $rev"
done
echo arguments are reverse are : "$rev"
