echo "Enter the 1st number"
read num1
echo "Enter the 2nd number"
read num2
echo "Enter 1 to add,2 to sub,3 to multiply,4 to div"
read op
case $op in
 1)
 	rs=$((num1 + num2))
	echo "sum= $rs";;
 2)
 	df=$((num1 - num2))
	echo "substraction=$df";;
 3)
 	pi=$((num1 * num2))
	echo "product= $pi";;
 4)
 	if [ $num2 -ne 0 ];
         then
	 di=$((num1 / num2))
	 echo "Divisible= $di"
        else
	 echo "Invalid"
 	fi;;
*)
   echo "Invalid input";;
esac
