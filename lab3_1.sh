#!/bin/bash


counter=1
t=true
#while [ $a -lt 8 ]

while [ $counter -lt $1 ] && $t
do 
  newcounter=1
  
  
  
     while [ $newcounter -lt $1 ] && $t
do

  
   x=$(($counter * $counter))
   y=$(($newcounter * $newcounter))
   hyp=$(($1*$1))
   
    if [ $(($x+$y)) -eq  $hyp ]
     then
     echo "Yes"
     #echo "numbers are $newcounter and $counter"
     t=false
     fi  
     
      
     newcounter=$(($newcounter+1))     
   #echo $newcounter
    #echo $counter
   
   
   
     

    done 
    counter=$(($counter+1))

done 

if [[ $t == true ]]
then
echo "No"
fi
