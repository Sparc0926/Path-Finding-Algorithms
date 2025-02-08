MAP=./dao-map/$1.map
ALG=$2

make ALG=$ALG
./prog $MAP
make clean ALG=$ALG