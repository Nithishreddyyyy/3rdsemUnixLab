read -p"Enter the String 1: " str1
read -p"Enter the String 2: " str2

echo length of string 1 is : ${#str1}
echo length of string 2 is : ${#str2}

if test -z "$str1"
then
    echo str 1 is NULL string
else
    echo str 1 is Not a NULL string
fi
if test -z "$str2"
then
    echo str 2 is NULL string
else
    echo str 2 is Not NULL string
fi

if test "$str1" = "$str2"
then
    echo Strings are equal
else
    echo strings are unequal
fi
