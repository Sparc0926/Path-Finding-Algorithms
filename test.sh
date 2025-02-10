MAPDIR=./MapSrcs
IMGDIR=./ImgSrcs
ALGDIR=./SearchAlg

MAP=$MAPDIR/$1.map
ALG=$2



# make and run the algorithm
make ALG=$ALG ALGDIR=$ALGDIR

echo "running the program"
./prog $MAP

make clean


: '
# animate the map
echo "converting $MAP into animation"

image=()
read -r row col < $MAP
while IFS= read -n 1 cell; do
    if [ "$cell" == "@" ]; then
        image+=("rock.png")
    elif [ "$cell" == "T" ]; then
        image+=("bush.png")
    elif [ "$cell" == "." ] ; then
        image+=("trail.png")
    fi
done < $MAP

cd ./ImgSrcs
montage ${image[@]} \
        -background none \
        -tile "$col"x"$row" \
        -geometry +0+0 \
        ../animated_map.png
'