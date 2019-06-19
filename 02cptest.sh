#!/bin/bash
problemname=$1
script_dir=$(cd $(dirname $0); pwd)
src_dir=${script_dir}/src

oj login "https://${problemname:0:6}.contest.atcoder.jp/tasks/${problemname:0:8}" 

# testディレクトリにすでにテストがある場合はスキップ
if [ ! -e test/$1 ]; then
  rm -rf test/*
  oj dl "https://${problemname:0:6}.contest.atcoder.jp/tasks/${problemname:0:8}"
fi
touch test/$1

g++ -Wall -std=c++14 ${src_dir}/${problemname:0:6}/$1.cc
oj test
rm -f a.out