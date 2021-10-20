sed "s/:/\n/g" | grep -v "/" | grep " $1" | wc -l
