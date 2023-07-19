<h2 id="x0f---function-pointers">0x0F - Function pointers</h2>
<h3 id="general">General</h3>
<p>1- Like any other pointer in C, a function pointer also stores an address, but instead of pointing to data, it points to executable code, which is the starting address of a function in memory.</p>
<p>2- Declaration:</p>
<pre><code> /*fun_ptr is a pointer to function fun()*/
    void (*fun_ptr)(int) = &amp;fun;
                    *OR*
    void (*fun_ptr)(int) = fun;  &lt;-
</code></pre>
<p>3- Invocation :</p>
<pre><code>/*We CALL fun_ptr which previously stores the address of fun*/
    (*fun_ptr)(10);
           *OR*
    fun_ptr(10);  &lt;-
</code></pre>
<p>4- Array of function pointers:</p>
<pre><code>// fun_ptr_arr is an array of function pointers

void (*fun_ptr_arr[])(int, int) = {...,....};
</code></pre>
<h3 id="objectives">Objectives</h3>
<ul>
<li>What are function pointers and how to use them.</li>
<li>What does a function pointer hold exactly?</li>
<li>Where does a function pointer point to in the virtual memory?</li>
</ul>
<h3 id="concept">Concept</h3>
<ol>
<li><a href="https://www.geeksforgeeks.org/c-pointers/">Pointers</a>;</li>
<li><a href="https://www.geeksforgeeks.org/function-pointer-in-c/">Function Pointer</a>;</li>
<li><a href="https://www.geeksforgeeks.org/memory-layout-of-c-program/">Memory Layout</a>;</li>
</ol>


