#!/bin/bash


#IFS='/t'
counter=0
newcounter=0

if [ ! -e $1 ] || [ ! -e $2 ]

#if [[ ! -e $1 || $4 ]]
#if [ $1 -eq $4 ] || [ $2 -eq $4 ]


then 

echo 'Files do not exist'

else 

while read -r first last ID1

  do
    
   while read -r ID2 course grade 
       

        do  
          if [ $ID2 -eq $ID1 ];

              then
              
              
                if [ $ID1 == $3 ]
                 then
                  if [[ $grade == $4 ]]
                   then 
                   echo $first $last has no grade in the course $course
                   counter=$(($counter+1))
                   else 
                   echo $first $last has $grade in course $course
                   counter=$(($counter+1))
                   fi
                                   
            
              
              fi
             
           fi
           
 newcounter=69
          
                                   
        done <$2    #lab3_2bfile.txt
 
done <$1           #lab3_2afile.txt
 fi

if  [ $newcounter == 69 ] && [ $counter == 0 ] 
  then
     echo "No such ID"
fi






