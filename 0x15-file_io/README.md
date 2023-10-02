<h1 id="file-io">File I/O</h1>
<h2 id="general">General</h2>
<p>C programming treats all the devices as files. So devices such as the display are addressed in the same way as files and the following three files are automatically opened when a program executes to provide access to the keyboard and screen.</p>

<table>
<thead>
<tr>
<th>Standard File</th>
<th>File Pointer</th>
<th>Integer value</th>
<th>Device</th>
</tr>
</thead>
<tbody>
<tr>
<td>Standard input</td>
<td>stdin</td>
<td>0</td>
<td>Keyboard</td>
</tr>
<tr>
<td>Standard output</td>
<td>stdout</td>
<td>1</td>
<td>Screen</td>
</tr>
<tr>
<td>Standard error</td>
<td>stderr</td>
<td>2</td>
<td>Your screen</td>
</tr>
<tr>
<td>other files</td>
<td>ptr-&gt;file</td>
<td>3+</td>
<td>–</td>
</tr>
</tbody>
</table><p>The file pointers are the means to access the file for reading and writing purpose. This section explains how to read values from the screen and how to print the result on the screen.</p>
<h3 id="what">What</h3>
<p>In C, a <em>file descriptor</em> is an <strong>integer</strong> that serves as a unique identifier for an opened file. It is used by the operating system to manage file access. When you open a file, the operating system assigns a file descriptor to it.</p>
<h3 id="example-in-c">Example in C;</h3>
<p>To use I/O system calls, <code>open</code>, <code>close</code>, <code>read</code>, and <code>write</code>.<br>
include the appropriate header file <code>&lt;stdio.h&gt;</code> (or:<code>&lt;unistd.h&gt;</code> for symbolic constants) and use the mentioned functions.</p>
<p>#include &lt;stdio.h&gt;</p>
<pre><code>int main() {
    // Opening a file for writing
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        // Error handling
        printf("Failed to open the file.\n");
        return 1;
    }

    // Writing data to the file
    fprintf(file, "Hello, World!");

    // Closing the file
    fclose(file);

    return 0;
}
</code></pre>
<h3 id="objectives">Objectives</h3>
<p>-Use the I/O system calls.<br>
-Understand/use:<br>
File descriptors, <code>POSIX</code>, flags, permissions.</p>
<h3 id="concept">Concept</h3>
<p>-<a href="https://www.tutorialspoint.com/cprogramming/c_input_output.htm">C - Input and Output</a><br>
-<a href="https://www.tutorialspoint.com/cprogramming/c_file_io.htm">C - File I/O</a></p>
