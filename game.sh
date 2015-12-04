#! /bin/bash

answer=$((RANDOM%100))
cnt=0

echo 'what do you think answer?'
echo 'answer is 0 - 99 '

while true
do
read num
cnt=$(($cnt+1))

if [ $num -eq $answer ]
then
echo 'BINGO!'
break
elif [ $num -gt $answer ]
then
echo 'Your  number  is bigger than answer'
else
echo 'Your number is smaller than answer'
fi
done
echo $cnt 'is your try number'
