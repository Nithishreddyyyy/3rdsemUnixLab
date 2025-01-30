read -p"Enter a number:" num1
rev=0
echo the entered number is: "$num1"
while test $num1 -ne 0
do
    rem=`expr $num1 % 10`
    rev=`expr $rem + $rev \* 10`

    num1=`expr $num1 / 10`
done
echo the reversed num is: $rev
