k=1
for j in $(seq 1 3); do
    for i in $(seq 1 5); do
        date >>test-$k.txt #5 time snmp get
        sleep 1            #interval
    done
    echo "loop $j done" # after 1 loop sent it to s3 bucket
    k=$((k + 1))
done

#++++++++++++++++++++++++++++++


# for i in $(seq 0 5760);do

#     date >>/tmp/portData.txt
# snmpget -v2c -c public 10.0.10.150 .1.3.6.1.2.1.2.2.1.8.1 >>/tmp/portData.txt
# snmpget -v2c -c public 10.0.10.150 .1.3.6.1.2.1.2.2.1.8.2 >>/tmp/portData.txt
# snmpget -v2c -c public 10.0.10.150 .1.3.6.1.2.1.2.2.1.8.3 >>/tmp/portData.txt
# snmpget -v2c -c public 10.0.10.150 .1.3.6.1.2.1.2.2.1.8.4 >>/tmp/portData.txt
# snmpget -v2c -c public 10.0.10.150 .1.3.6.1.2.1.2.2.1.8.5 >>/tmp/portData.txt
# snmpget -v2c -c public 10.0.10.150 .1.3.6.1.2.1.2.2.1.8.6 >>/tmp/portData.txt
#     sleep 5
# done
# cobo-d s3Push /tmp/portData.txt /mansfield/portDataIssue/

#++++++++++++++++++++++++++++++







#+++++++++++++++++++++++++++++++++++++++++

# a=1
# while :; do
#     for i in $(seq 0 5); do

#         date >>a-$a.txt
#     done
#     echo "loop"

#     if [ "$a" -le "5" ]; then
#         a=$((a + 1))
#     else
#         exit 0
#     fi
# done
