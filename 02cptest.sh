#!/bin/bash
problemname=$1
script_dir=$(cd $(dirname $0); pwd)
src_dir=${script_dir}/src

# 本番中に使うためにログインする
oj login "https://${problemname:0:6}.contest.atcoder.jp/tasks/${problemname:0:8}" 

# testディレクトリがなければ取得する
if [ ! -e test/$1 ]; then
  rm -rf test/
  oj dl "https://${problemname:0:6}.contest.atcoder.jp/tasks/${problemname:0:8}"
fi
touch test/$1

g++ -Wall -std=c++14 ${src_dir}/${problemname:0:6}/$1.cpp
oj test
rm -f a.out