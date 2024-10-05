#!/bin/sh
BINARY_HOME=./bin
INPUT_HOME=./input
INPUT=${INPUT_HOME}/AB_NYC_2019.csv

MEAN_PRICE=$(cat ${INPUT} | ${BINARY_HOME}/mapper | sort -k1 | ${BINARY_HOME}/reducer)

cat ${INPUT} | ${BINARY_HOME}/mapper_variance $MEAN_PRICE | sort -k1 | ${BINARY_HOME}/reducer_variance > output
cat output