<h2 id="x0e-structures-typedef">0x0E-Structures, Typedef</h2>
<h3 id="general">General</h3>
<p>1- Structures group related variables for streamlined code organization.</p>
<pre><code>struct person {
   char name[50];
   int age;
   float salary;
};
</code></pre>
<p>2- Typedef creates aliases for data types, enhancing code readability.</p>
<pre><code>typedef int Number;
</code></pre>
<p><em>–Combination  example:</em></p>
<pre><code>typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char name[50];
    int age;
    Date birthdate;
} Person;
</code></pre>
<p>Learn how to implement and utilize them effectively in your programs.</p>
<h3 id="objectives">Objectives</h3>
<ul>
<li>What are <em>structures</em>, when, why and how to use them.</li>
<li>What are <em>typedef</em>, when, why and how to use them.</li>
</ul>
<h3 id="concept">Concept</h3>
<ol>
<li><a href="https://www.geeksforgeeks.org/data-types-in-c/">Date types</a>;</li>
<li><a href="http://www.tutorialspoint.com/cprogramming/c_structures.htm">Structures</a>; /<em>User defined</em>/</li>
<li><a href="http://www.tutorialspoint.com/cprogramming/c_typedef.htm">Typedef</a>; /<em>User defined</em>/</li>
</ol>
