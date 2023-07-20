<h2 id="x10---variadic-functions">0x10 - Variadic Functions</h2>
<h3 id="general">General</h3>
<p>1- Simply a function that takes a variable <strong>number</strong> or <strong>type</strong> of arguments.</p>
<p>2- C core provides no way to access these <em>non-required args</em>; Introducing special libs to handle those mechanisms: <code>&lt;stdarg.h&gt;</code></p>
<p>3- <code>&lt;stdarg.h&gt;</code> provides special MACROS used to manipulate otherwise inaccessible args. i.e: <code>va-list va-start va-arg va-end</code></p>
<p>4- Syntax:<br>
    <code>int func(const char *a, int b, …) { //code block … }</code></p>
<p><em>In this example, we have 2 fixed args: [@a: pointer to a type const char, aka, a const string], [@b: an integer] and [ … ] the part of the function to accept any number or type of args (depending on use).</em></p>
<h3 id="objectives">Objectives</h3>
<ul>
<li>What are <em>variadic functions</em></li>
<li>How to use  <code>va_start</code>,  <code>va_arg</code>  and  <code>va_end</code>  macros</li>
<li>Why and how to use the  <code>const</code>  type qualifier</li>
</ul>
<h3 id="concept">Concept</h3>
<ol>
<li><a href="https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html">Variadic Functions</a> (definition, declaration, call)</li>
<li><a href="https://www.gnu.org/software/libc/manual/html_node/Argument-Macros.html#index-va_005fend">Argument access MACROS</a>;</li>
</ol>


