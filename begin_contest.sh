#!/bin/bash

cd `dirname $0`
dir=`pwd`

echo $dir

contest=$1
number=$2


echo "Create contest directory..."
mkdir $contest
cd $contest


echo "Create contest number directory..."
mkdir $number
cd $number


echo "Create files."

# cpp file template
template=$(cat <<EOS
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
using ll = long long;
typedef pair<int,int> P;

const int INF = 1001001001;
const long double PI = (acos(-1));
const int MOD = 1e9+7;
const int vx[4] = {0,1,0,-1};
const int vy[4] = {1,0,-1,0};

int main() {


    return 0;
}
EOS
)

filelist=("a" "b" "c" "d" "e" "f")

for file in ${filelist[@]}
do
    touch ${file}.cpp
    echo "$template" > ${file}.cpp
    echo "created file: ${file}.cpp"
done

echo "Add executable into CMakeLists.txt"

cd ..

# Write settings into CMakeLists.txt
echo "" >> ./CMakeLists.txt
echo "# Contest $contest $number" >> ./CMakeLists.txt

for file in ${filelist[@]}
do
    echo "add_executable(${number}_${file} $number/${file}.cpp)" >> ./CMakeLists.txt
done
