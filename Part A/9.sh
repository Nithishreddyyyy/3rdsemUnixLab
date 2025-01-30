f0=0
f1=1
echo Fibonacci numbers are:
echo $f0
echo $f1
num=3
while [ $num -le 25 ]
do
    f2=`expr $f0 + $f1`
    echo $f2
    f0=$f1
    f1=$f2
    num=`expr $num + 1`
done
