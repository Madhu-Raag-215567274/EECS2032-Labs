#!/bin/bash
l=$1
y=$2
z=$3
a=$4
m=$(($z-l))

if [ $1 -lt 0 ] || [ $2 -lt 0 ] || [ $3 -lt 0 ] || [ $4 -lt 0 ]  
then 
echo "No negative numbers please"

elif [ $1 -gt 12 ] || [ $1 -le 0 ] || [ $3 -gt 12 ] || [ $3 -le 0 ] 
then
echo "Wrong month format"

elif [[ $2 -gt $4 || ( $2 -eq $4  &&  $1 -gt $3 ) ]]
then
	echo "Date1 is bigger than date2" 
elif [ $1 -eq $3 ]
then 
	echo "$(($a - $y)) years 0 months"
elif [ $l -gt $z ]
then 
	echo " $(($a-$y -1)) years $((12- ($l - $z))) months"
else
	echo "$(($a-$y)) years $m months"

fi

#elif [ $m -lt 0 ]
#then

#m=$(($m*-1))

#echo "$(($a-$y)) years $m months"

