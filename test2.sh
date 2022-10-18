i=0
while [ $i -le 10 ]
do
 echo i:$i >> a.txt
 ((i+=1))
done