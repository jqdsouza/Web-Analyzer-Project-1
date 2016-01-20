# Web-Analyzer
This project was made to take input from a given input file, and compute some basic statistics on the data in the input file.

The attached input file comprises rows. A line of data comprisese three fields. The fields in a line are separated by one or more spaces. A string URI (Universal Resource Identifier), a positive integer size, and a non-negative integer priority.

The basic statistics that are computed include:

1. The average size of a URI. That is, the average of the 2nd field across all the lines of the data in the input file.

2. The expected delay a client-request undergoes before the server processes the request. It is assumed that (a) every URI is equally likely to be  requested, (B) no other client requests are pending, and (c) the only priority values are 0, 1, ... , 5. The expectation is a weighted average. Suppose we have n0 URIs with priotiy 0, n1, URIs with priority 1 and so on. Let N = the sum from i = 0 to i = 5 of ni. Then, the expected delay under the above assumption is the sum from i = 0 to i = 5 of i x (ni/N).

3.The expected total delay before a client-request is served. The total delay has two components: (a) The delay introduced by the prioity -- this is the same as in (2) above. (b) The delay owing to the size of the URI. The delay is transmission delay -- the time it takes the server to transmit the file to the client. Assume the size in the input fuile is in Mega Bytes, and that the transmission speed is 10 Megabits per second. We make the same assumptions as in (2) above. Suppose we have u URIs in the input file, and that pi is the priority of the URI i, and di is the transmission delay, in seconds incurred by URI i. Then, the expected total delay of a client-request under the above assumptions is the sum from i = 1 to i = u of (pi + di)/u.



