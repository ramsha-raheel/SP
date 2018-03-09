#! /bin/bash



function table1 () 
{

#echo $1
#echo $2
if [ $# -eq 0 ]
then
echo "RULE 1"
echo "no arguements are passed " 

elif [ $# -gt 6 ]
then 
echo "RULE 2"
echo "arguemnets are greater than 6 "

elif [ $# -eq 1 ] 
then
echo "RULE 3"
	first=$1
	expr $first + 1 1>/dev/null  2>/dev/null  

        if [ $? -eq 0 ]
	then
   		for i in `seq 1 10`
   		do
     			 echo "$first * $i = " `expr $first \* $i`
   		done
	else
	echo "wrong format "
	fi

elif [ $# -eq 3 -a $2 = "-s" ] 
then
echo "RULE 4"
	first=$1
	second=$3
	option=$2
	
        
	        if [ `expr $first + 1` 2>/dev/null 1>/dev/null  -a `expr $second + 1` 1>/dev/null 2>/dev/null -a $second -le 10 ]
		then
   			for i in `seq $second 10`
   			do
     				 echo "$first * $i = " `expr $first \* $i`
   			done
		else
		echo "wrong format "
		fi


elif [ $# -eq 3 -a $2 = "-e" ] 
then
echo "RULE 5"
	first=$1
	second=$3
	option=$2

	

	if [ `expr $first + 1`  1>/dev/null 2>/dev/null -a `expr $second + 1` 1>/dev/null  2>/dev/null ]
	then
   		for i in `seq 1 $second`
   		do
     			 echo "$first * $i = " `expr $first \* $i`
   		done
	else
	echo "wrong format "
	fi



elif [ $# -eq 5 -a $2="-s" -a  $4="-e" ] 
then
echo "RULE 6"
	first=$1
	second=$3
        third=$5
	option=$2


	if [ `expr $first + 1` 1>/dev/null 2>/dev/null -a `expr $second + 1` 1>/dev/null 2>/dev/null -a `expr $third + 1` 1>/dev/null 2>/dev/null -a $second -le $third ]
	then
		for i in `seq $second $third` 
	   	do
	     		 echo "$first * $i = " `expr $first \* $i`
	   	done
	else
	echo "wrong format "
	fi

#7
elif [ $# -eq 6 -a $2="-s" -a  $4="-e" -a $6="-r" ] 
then
echo "RULE 7"
	if [ `expr $1 + 1` -a `expr $3 + 1` -a `expr $5 + 1` ] 
	then
		for i in `seq $5 -1 $3`
		do
			echo "$1 * $i = " `expr $1 \* $i`
		done
	else
		echo "non intger argument "
	fi



else
echo "WRONG INPUT"

fi

}

table1 $@




