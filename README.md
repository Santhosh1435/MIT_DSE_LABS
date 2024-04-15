# MIT_DSE_LABS

Map Reduce
------------
local:

cat input.txt | python3 mapper.py

cat input.txt | python3 mapper.py | sort | python3 reducer.py


streaming:

1.hdfs dfs -put /workdir/emp.txt /
mapred streaming -input /emp.txt -output /out -file /workdir/map.py -mapper /workdir/map.py -reducer /workdir/red.py -file /workdir/red.py

2.hdfs dfs -put emp.txt /
mapred streaming -input /input.txt -output /out -file map.py -mapper map.py -reducer red.py -file red.py

To view out files -->> hdfs dfs -ls /out


pig
------------


local:
-- Load data
data = LOAD '/workdir/pig/input1.txt' AS (line:CHARARRAY);

-- Tokenize words
words = FOREACH data GENERATE FLATTEN(TOKENIZE(line)) AS word;

-- Group by word and count occurrences
word_count = GROUP words BY word;
word_count_result = FOREACH word_count GENERATE group AS word, COUNT(words) AS count;

-- Store result
STORE word_count_result INTO '/workdir/pig/word_count_out';

pig -x local /workdir/pig/wc.pig


mapreduce:
1. hdfs dfs -put /workdir/pig/input1.txt /

nano /workdir/pig/wc.pig

-- Load data
data = LOAD '/input1.txt' AS (line:CHARARRAY);

-- Tokenize words
words = FOREACH data GENERATE FLATTEN(TOKENIZE(line)) AS word;

-- Group by word and count occurrences
word_count = GROUP words BY word;
word_count_result = FOREACH word_count GENERATE group AS word, COUNT(words) AS count;

-- Store result
STORE word_count_result INTO '/word_count_out';

pig -x mapreduce /workdir/pig/wc.pig




