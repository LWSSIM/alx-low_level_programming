<h1 id="singly-linked-lists">Singly linked lists</h1>
<h2 id="general">General</h2>
<p>Study of the linked lists data-structures, appropriate algorithms, and some use cases.</p>
<p>If <em>arrays</em> accommodate similar types of data types, <em>linked lists</em> consist of elements with different data types that are also arranged sequentially. <em>(not the case in memory).</em></p>
<h3 id="what">What</h3>
<p>A linked list is <em>LINEAR DATA STRUCTURE</em>  that consists of a <em>collection of “nodes”</em> connected together via links. These nodes consist of the <strong>data</strong> to be stored and a <strong>pointer</strong> to the <em>address</em> of the <em>next node</em> within the linked list.</p>
<p>-In the case of: -   <strong>Singly Linked List</strong>  − The nodes only point to the address of the next node in the list.</p>
<p><img src="https://www.tutorialspoint.com/data_structures_algorithms/images/singly_linked_lists.jpg" alt="enter image description here"></p>
<h3 id="in-c">In C;</h3>
<h4 id="declaration">Declaration:</h4>
<p>In the case of SLL, node structure is easily declared in C, and mainly has 2 parts, 1-to hold data, 2-to point to next node.</p>
<pre><code> struct Node
    {
    int data; //Data stored in Node
    struct Node* next; // ptr to next Node
    };
</code></pre>
<h4 id="malloc">Malloc:</h4>
<p>We can allocate the necessary memory based on the size of our node structure:</p>
<pre><code>malloc(sizeof(struct Node));
</code></pre>
<h3 id="objectives">Objectives</h3>
<ul>
<li>When and why should we use linked lists vs arrays</li>
<li>How to build and use linked lists</li>
</ul>
<h3 id="concept">Concept</h3>
<p>-<a href="https://www.geeksforgeeks.org/c-pointers/">C pointers</a>.<br>
-<a href="https://www.geeksforgeeks.org/data-structures/?ref=shm">Data structures</a><br>
-<a href="https://www.geeksforgeeks.org/fundamentals-of-algorithms/">Algorithms</a><br>
-<a href="https://www.geeksforgeeks.org/data-structures/linked-list/?ref=lbp">Linked lists</a></p>
