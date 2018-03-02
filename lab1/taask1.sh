#!/bin/bash
read -p "enter first number: " n1 
read -p "enter second number: " n2
expr $n1 + 0 2>/dev/null && expr $n2 + 0 2>/dev/null && echo "numbers are found" || echo "numbers not found";
if [ $? -eq 0 ]
then
echo "addition is: "`expr $n1 + $n2`
echo "subtraction is :"`expr $n1 - $n2`
echo "multiplication is :"`expr $n1 \* $n2`
if [ $n2 -ne 0 ]
then
echo "division is:" `expr $n1 / $n2` 
else
echo "n2 is 0"
fi
else 
echo "number not valid"
fi
