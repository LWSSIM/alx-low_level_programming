<h1 id="bit-manipulation">Bit Manipulation</h1>
<h2 id="general">General</h2>
<p>Unlike humans, computers have no concepts of words and numbers. They receive data encoded at the lowest level as a series of zeros and ones (0 and 1). These are called <a href="https://www.geeksforgeeks.org/differnce-between-bits-and-quantum-bits/"><strong>bits</strong></a><strong>,</strong> and they are the <strong>basis for all the commands</strong> they receive. We’ll begin by learning about bits and then explore a few algorithms for manipulating bits. We’ll then explore a few algorithms for manipulating bits. The tutorial is meant to be an introduction to bit algorithms for programmers.</p>
<h3 id="what">What</h3>
<p><a href="https://www.geeksforgeeks.org/bits-manipulation-important-tactics/">Bit Manipulation</a>  is a technique used in a variety of problems to get the solution in an optimized way. This technique is very effective from a  Competitive Programming point of view. It is all about  <a href="https://www.geeksforgeeks.org/interesting-facts-bitwise-operators-c/">Bitwise Operators</a>  which directly works upon  <a href="https://www.geeksforgeeks.org/interesting-method-generate-binary-numbers-1-n/">binary numbers</a>  or bits of numbers that help the implementation fast. Below are the  <strong>Bitwise Operators</strong>  that are used:</p>
<ul>
<li>Bitwise AND (&amp;)</li>
<li>Bitwise OR (|)</li>
<li>Bitwise XOR (^)</li>
<li>Bitwise NOT (!)</li>
</ul>
<p>All data in computer programs are internally stored as bits, i.e., as numbers 0 and 1.</p>
<p><img src="https://media.geeksforgeeks.org/wp-content/uploads/20220922145839/BItwiseoperatortruthtable-300x197.png" alt="Truth_table BitWise operators"></p>
<h3 id="example-in-c">Example in C;</h3>
<pre><code>    // C Program to demonstrate use of bitwise operators
#include &lt;stdio.h&gt;
int main()
{
	// a = 5(00000101), b = 9(00001001)
	unsigned char a = 5, b = 9;

	// The result is 00000001
	printf("a = %d, b = %d\n", a, b);
	printf("a&amp;b = %d\n", a &amp; b);

	// The result is 00001101
	printf("a|b = %d\n", a | b);

	// The result is 00001100
	printf("a^b = %d\n", a ^ b);

	// The result is 11111010
	printf("~a = %d\n", a = ~a);

	// The result is 00010010
	printf("b&lt;&lt;1 = %d\n", b &lt;&lt; 1);

	// The result is 00000100
	printf("b&gt;&gt;1 = %d\n", b &gt;&gt; 1);

	return 0;

}
</code></pre>
<h3 id="objectives">Objectives</h3>
<ul>
<li>What is bit manipulation and why use it.</li>
<li>How to manipulate bits and use bitwise operators.</li>
</ul>
<h3 id="concept">Concept</h3>
<p>-<a href="https://www.geeksforgeeks.org/bitwise-algorithms/?ref=lbp">Bitwise_Algorithms</a><br>
-<a href="https://www.geeksforgeeks.org/all-about-bit-manipulation/">Bit Manipulation</a></p>
