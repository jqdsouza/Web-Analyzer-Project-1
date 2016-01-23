# Web-Analyzer
This project was made to take input from a given input file, and compute some basic statistics on the data in the input file.

The attached input file comprises rows. A line of data comprises three fields. The fields in a line are separated by one or more spaces. A string URI (Universal Resource Identifier), a positive integer size, and a non-negative integer priority.

The basic statistics that are computed include:

1. The average size of a URI. That is, the average of the 2nd field across all the lines of the data in the input file.

2. The expected delay a client-request undergoes before the server processes the request. It is assumed that (a) every URI is equally likely to be  requested, (B) no other client requests are pending, and (c) the only priority values are 0, 1, ... , 5. The expectation is a weighted average. 

3. The expected total delay before a client-request is served. The total delay has two components: (a) The delay introduced by the prioity -- this is the same as in (2) above. (b) The delay owing to the size of the URI. The delay is transmission delay -- the time it takes the server to transmit the file to the client. Assume the size in the input fuile is in Mega Bytes, and that the transmission speed is 10 Megabits per second. We make the same assumptions as in (2) above. 



