      <div class="panel panel-default" id="project-description">
  <div class="panel-body">
    <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/2-7-eVuWcPutbXf6YZZgiA" title="Google" target="_blank">Google</a> </li>
<li><a href="/rltoken/wVWwl86ufLMsXeAigpxllg" title="Youtube" target="_blank">Youtube</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/jL0iK5DlEbQK5eIwCNDa-g" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>How to use linked lists</li>
<li>Start to look for the right source of information without too much help</li>
</ul>

<h3>Copyright - Plagiarism</h3>

<ul>
<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else&rsquo;s work. </li>
<li>You are not allowed to publish any content of this project.</li>
<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The only C standard library functions allowed are <code>malloc</code>, <code>free</code> and <code>exit</code>. Any use of functions like <code>printf</code>, <code>puts</code>, <code>calloc</code>, <code>realloc</code> etc&hellip; is forbidden</li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>lists.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>

<h2>More Info</h2>

<p>Please use this data structure for this project:</p>

<pre><code>/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
</code></pre>

  </div>
</div>


      

      

        
          <h2 class="gap">Tasks</h2>

    <div data-role="task992" data-position="1" id="task-num-0">
      <div class="panel panel-default task-card " id="task-992">
  <span id="user_id" data-id="96361"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      0. Print list
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="96361"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that prints all the elements of a <code>listint_t</code> list.</p>

<ul>
<li>Prototype: <code>size_t print_listint(const listint_t *h);</code></li>
<li>Return: the number of nodes</li>
<li>Format: see example</li>
<li>You are allowed to use <code>printf</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 0-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &amp;hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf(&quot;Error\n&quot;);
        return (1);
    }
    new-&gt;n = 9;
    new-&gt;next = head;
    head = new;
    n = print_listint(head);
    printf(&quot;-&gt; %lu elements\n&quot;, n);
    free(new);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a
julien@ubuntu:~/0x13. More singly linked lists$ ./a 
9
8
-&gt; 2 elements
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x13-more_singly_linked_lists</code></li>
            <li>File: <code>0-print_listint.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="992">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="992" data-batch-id="24" data-toggle="modal" data-target="#task-992-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-992-users-done-modal" data-task-id="992" data-batch-id="24">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "0. Print list"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task993" data-position="2" id="task-num-1">
      <div class="panel panel-default task-card " id="task-993">
  <span id="user_id" data-id="96361"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      1. List length
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="96361"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that returns the number of elements in a linked <code>listint_t</code> list.</p>

<ul>
<li>Prototype: <code>size_t listint_len(const listint_t *h);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 1-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &amp;hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf(&quot;Error\n&quot;);
        return (1);
    }
    new-&gt;n = 9;
    new-&gt;next = head;
    head = new;
    n = listint_len(head);
    printf(&quot;-&gt; %lu elements\n&quot;, n);
    free(new);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-listint_len.c -o b
julien@ubuntu:~/0x13. More singly linked lists$ ./b 
-&gt; 2 elements
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x13-more_singly_linked_lists</code></li>
            <li>File: <code>1-listint_len.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="993">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="993" data-batch-id="24" data-toggle="modal" data-target="#task-993-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-993-users-done-modal" data-task-id="993" data-batch-id="24">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "1. List length"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task994" data-position="3" id="task-num-2">
      <div class="panel panel-default task-card " id="task-994">
  <span id="user_id" data-id="96361"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      2. Add node
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="96361"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that adds a new node at the beginning of a <code>listint_t</code> list.</p>

<ul>
<li>Prototype: <code>listint_t *add_nodeint(listint_t **head, const int n);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
</ul>

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 2-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint(&amp;head, 0);
    add_nodeint(&amp;head, 1);
    add_nodeint(&amp;head, 2);
    add_nodeint(&amp;head, 3);
    add_nodeint(&amp;head, 4);
    add_nodeint(&amp;head, 98);
    add_nodeint(&amp;head, 402);
    add_nodeint(&amp;head, 1024);
    print_listint(head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_nodeint.c 0-print_listint.c -o c
julien@ubuntu:~/0x13. More singly linked lists$ ./c 
1024
402
98
4
3
2
1
0
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x13-more_singly_linked_lists</code></li>
            <li>File: <code>2-add_nodeint.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="994">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="994" data-batch-id="24" data-toggle="modal" data-target="#task-994-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-994-users-done-modal" data-task-id="994" data-batch-id="24">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "2. Add node"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task995" data-position="4" id="task-num-3">
      <div class="panel panel-default task-card " id="task-995">
  <span id="user_id" data-id="96361"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      3. Add node at the end
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="96361"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that adds a new node at the end of a <code>listint_t</code> list.</p>

<ul>
<li>Prototype: <code>listint_t *add_nodeint_end(listint_t **head, const int n);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
</ul>

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 3-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&amp;head, 0);
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 2);
    add_nodeint_end(&amp;head, 3);
    add_nodeint_end(&amp;head, 4);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 402);
    add_nodeint_end(&amp;head, 1024);
    print_listint(head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d
julien@ubuntu:~/0x13. More singly linked lists$ ./d 
0
1
2
3
4
98
402
1024
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x13-more_singly_linked_lists</code></li>
            <li>File: <code>3-add_nodeint_end.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="995">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="995" data-batch-id="24" data-toggle="modal" data-target="#task-995-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-995-users-done-modal" data-task-id="995" data-batch-id="24">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "3. Add node at the end"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task996" data-position="5" id="task-num-4">
      <div class="panel panel-default task-card " id="task-996">
  <span id="user_id" data-id="96361"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      4. Free list
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="96361"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that frees a <code>listint_t</code> list.</p>

<ul>
<li>Prototype: <code>void free_listint(listint_t *head);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 4-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&amp;head, 0);
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 2);
    add_nodeint_end(&amp;head, 3);
    add_nodeint_end(&amp;head, 4);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 402);
    add_nodeint_end(&amp;head, 1024);
    print_listint(head);
    free_listint(head);
    head = NULL;
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o e
julien@ubuntu:~/0x13. More singly linked lists$ valgrind ./e 
==3643== Memcheck, a memory error detector
==3643== Copyright (C) 2002-2015, and GNU GPL&#39;d, by Julian Seward et al.
==3643== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3643== Command: ./e
==3643== 
0
1
2
3
4
98
402
1024
==3643== 
==3643== HEAP SUMMARY:
==3643==     in use at exit: 0 bytes in 0 blocks
==3643==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3643== 
==3643== All heap blocks were freed -- no leaks are possible
==3643== 
==3643== For counts of detected and suppressed errors, rerun with: -v
==3643== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x13-more_singly_linked_lists</code></li>
            <li>File: <code>4-free_listint.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="996">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="996" data-batch-id="24" data-toggle="modal" data-target="#task-996-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-996-users-done-modal" data-task-id="996" data-batch-id="24">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "4. Free list"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task997" data-position="6" id="task-num-5">
      <div class="panel panel-default task-card " id="task-997">
  <span id="user_id" data-id="96361"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      5. Free
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="96361"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that frees a <code>listint_t</code> list.</p>

<ul>
<li>Prototype: <code>void free_listint2(listint_t **head);</code></li>
<li>The function sets the <code>head</code> to <code>NULL</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 5-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&amp;head, 0);
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 2);
    add_nodeint_end(&amp;head, 3);
    add_nodeint_end(&amp;head, 4);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 402);
    add_nodeint_end(&amp;head, 1024);
    print_listint(head);
    free_listint2(&amp;head);
    printf(&quot;%p\n&quot;, (void *)head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c -o f
julien@ubuntu:~/0x13. More singly linked lists$ valgrind ./f 
==3843== Memcheck, a memory error detector
==3843== Copyright (C) 2002-2015, and GNU GPL&#39;d, by Julian Seward et al.
==3843== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3843== Command: ./f
==3843== 
0
1
2
3
4
98
402
1024
(nil)
==3843== 
==3843== HEAP SUMMARY:
==3843==     in use at exit: 0 bytes in 0 blocks
==3843==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3843== 
==3843== All heap blocks were freed -- no leaks are possible
==3843== 
==3843== For counts of detected and suppressed errors, rerun with: -v
==3843== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x13-more_singly_linked_lists</code></li>
            <li>File: <code>5-free_listint2.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="997">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="997" data-batch-id="24" data-toggle="modal" data-target="#task-997-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-997-users-done-modal" data-task-id="997" data-batch-id="24">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "5. Free"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task998" data-position="7" id="task-num-6">
      <div class="panel panel-default task-card " id="task-998">
  <span id="user_id" data-id="96361"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      6. Pop
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="96361"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that deletes the head node of a <code>listint_t</code> linked list, and returns the head node&rsquo;s data (n).</p>

<ul>
<li>Prototype: <code>int pop_listint(listint_t **head);</code></li>
<li>if the linked list is empty return <code>0</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 6-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    int n;

    head = NULL;
    add_nodeint_end(&amp;head, 0);
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 2);
    add_nodeint_end(&amp;head, 3);
    add_nodeint_end(&amp;head, 4);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 402);
    add_nodeint_end(&amp;head, 1024);
    print_listint(head);
    n = pop_listint(&amp;head);
    printf(&quot;- %d\n&quot;, n);
    print_listint(head);
    n = pop_listint(&amp;head);
    printf(&quot;- %d\n&quot;, n);
    print_listint(head);
    free_listint2(&amp;head);
    printf(&quot;%p\n&quot;, (void *)head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 6-pop_listint.c -o g
julien@ubuntu:~/0x13. More singly linked lists$ valgrind ./g 
==4369== Memcheck, a memory error detector
==4369== Copyright (C) 2002-2015, and GNU GPL&#39;d, by Julian Seward et al.
==4369== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4369== Command: ./g
==4369== 
0
1
2
3
4
98
402
1024
- 0
1
2
3
4
98
402
1024
- 1
2
3
4
98
402
1024
(nil)
==4369== 
==4369== HEAP SUMMARY:
==4369==     in use at exit: 0 bytes in 0 blocks
==4369==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==4369== 
==4369== All heap blocks were freed -- no leaks are possible
==4369== 
==4369== For counts of detected and suppressed errors, rerun with: -v
==4369== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x13-more_singly_linked_lists</code></li>
            <li>File: <code>6-pop_listint.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="998">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="998" data-batch-id="24" data-toggle="modal" data-target="#task-998-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-998-users-done-modal" data-task-id="998" data-batch-id="24">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "6. Pop"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task999" data-position="8" id="task-num-7">
      <div class="panel panel-default task-card " id="task-999">
  <span id="user_id" data-id="96361"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      7. Get node at index
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="96361"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that returns the nth node of a <code>listint_t</code> linked list.</p>

<ul>
<li>Prototype: <code>listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);</code></li>
<li>where <code>index</code> is the index of the node, starting at <code>0</code></li>
<li>if the node does not exist, return <code>NULL</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 7-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *node;

    head = NULL;
    add_nodeint_end(&amp;head, 0);
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 2);
    add_nodeint_end(&amp;head, 3);
    add_nodeint_end(&amp;head, 4);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 402);
    add_nodeint_end(&amp;head, 1024);
    print_listint(head);
    node = get_nodeint_at_index(head, 5);
    printf(&quot;%d\n&quot;, node-&gt;n);
    print_listint(head);
    free_listint2(&amp;head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 7-get_nodeint.c -o h
julien@ubuntu:~/0x13. More singly linked lists$ ./h 
0
1
2
3
4
98
402
1024
98
0
1
2
3
4
98
402
1024
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x13-more_singly_linked_lists</code></li>
            <li>File: <code>7-get_nodeint.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="999">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="999" data-batch-id="24" data-toggle="modal" data-target="#task-999-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-999-users-done-modal" data-task-id="999" data-batch-id="24">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "7. Get node at index"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task1000" data-position="9" id="task-num-8">
      <div class="panel panel-default task-card " id="task-1000">
  <span id="user_id" data-id="96361"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      8. Sum list
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="96361"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that returns the sum of all the data (n) of a <code>listint_t</code> linked list.</p>

<ul>
<li>Prototype: <code>int sum_listint(listint_t *head);</code></li>
<li>if the list is empty, return <code>0</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 8-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    int sum;

    head = NULL;
    add_nodeint_end(&amp;head, 0);
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 2);
    add_nodeint_end(&amp;head, 3);
    add_nodeint_end(&amp;head, 4);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 402);
    add_nodeint_end(&amp;head, 1024);
    sum = sum_listint(head);
    printf(&quot;sum = %d\n&quot;, sum);
    free_listint2(&amp;head);
    return (0);
}
julien@ubuntu:~/c0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_nodeint_end.c 5-free_listint2.c 8-sum_listint.c -o i
julien@ubuntu:~/0x13. More singly linked lists$ ./i 
sum = 1534
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x13-more_singly_linked_lists</code></li>
            <li>File: <code>8-sum_listint.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="1000">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="1000" data-batch-id="24" data-toggle="modal" data-target="#task-1000-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-1000-users-done-modal" data-task-id="1000" data-batch-id="24">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "8. Sum list"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task1001" data-position="10" id="task-num-9">
      <div class="panel panel-default task-card " id="task-1001">
  <span id="user_id" data-id="96361"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      9. Insert
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="96361"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that inserts a new node at a given position.</p>

<ul>
<li>Prototype: <code>listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);</code></li>
<li>where <code>idx</code> is the index of the list where the new node should be added. Index starts at <code>0</code></li>
<li>Returns: the address of the new node, or <code>NULL</code> if it failed</li>
<li>if it is not possible to add the new node at index <code>idx</code>, do not add the new node and return <code>NULL</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 9-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&amp;head, 0);
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 2);
    add_nodeint_end(&amp;head, 3);
    add_nodeint_end(&amp;head, 4);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 402);
    add_nodeint_end(&amp;head, 1024);
    print_listint(head);
    printf(&quot;-----------------\n&quot;);
    insert_nodeint_at_index(&amp;head, 5, 4096);
    print_listint(head);
    free_listint2(&amp;head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c -o j
julien@ubuntu:~/0x13. More singly linked lists$ ./j 
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x13-more_singly_linked_lists</code></li>
            <li>File: <code>9-insert_nodeint.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="1001">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="1001" data-batch-id="24" data-toggle="modal" data-target="#task-1001-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-1001-users-done-modal" data-task-id="1001" data-batch-id="24">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "9. Insert"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task1002" data-position="11" id="task-num-10">
      <div class="panel panel-default task-card " id="task-1002">
  <span id="user_id" data-id="96361"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      10. Delete at index
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="96361"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that deletes the node at index <code>index</code> of a <code>listint_t</code> linked list.</p>

<ul>
<li>Prototype: <code>int delete_nodeint_at_index(listint_t **head, unsigned int index);</code></li>
<li>where <code>index</code> is the index of the node that should be deleted. Index starts at <code>0</code></li>
<li>Returns: <code>1</code> if it succeeded, <code>-1</code> if it failed</li>
</ul>

<pre><code>julien@ubuntu:~/0x13. More singly linked lists$ cat 10-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&amp;head, 0);
    add_nodeint_end(&amp;head, 1);
    add_nodeint_end(&amp;head, 2);
    add_nodeint_end(&amp;head, 3);
    add_nodeint_end(&amp;head, 4);
    add_nodeint_end(&amp;head, 98);
    add_nodeint_end(&amp;head, 402);
    add_nodeint_end(&amp;head, 1024);
    print_listint(head);
    printf(&quot;-----------------\n&quot;);
    delete_nodeint_at_index(&amp;head, 5);
    print_listint(head);
    printf(&quot;-----------------\n&quot;);
    delete_nodeint_at_index(&amp;head, 0);
    print_listint(head);
    printf(&quot;-----------------\n&quot;);
    delete_nodeint_at_index(&amp;head, 0);
    print_listint(head);
    printf(&quot;-----------------\n&quot;);
    delete_nodeint_at_index(&amp;head, 0);
    print_listint(head);
    printf(&quot;-----------------\n&quot;);
    delete_nodeint_at_index(&amp;head, 0);
    print_listint(head);
    printf(&quot;-----------------\n&quot;);
    delete_nodeint_at_index(&amp;head, 0);
    print_listint(head);
    printf(&quot;-----------------\n&quot;);
    delete_nodeint_at_index(&amp;head, 0);
    print_listint(head);
    printf(&quot;-----------------\n&quot;);
    delete_nodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_nodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_nodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_nodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_nodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_nodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_nodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_nodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_nodeint_at_index(&amp;head, 0);
    printf(&quot;-----------------\n&quot;);
    delete_nodeint_at_index(&amp;head, 0);
    print_listint(head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 10-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 10-delete_nodeint.c -o k
julien@ubuntu:~/0x13. More singly linked lists$ valgrind ./k 
==5571== Memcheck, a memory error detector
==5571== Copyright (C) 2002-2015, and GNU GPL&#39;d, by Julian Seward et al.
==5571== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5571== Command: ./k
==5571== 
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
==5571== 
==5571== HEAP SUMMARY:
==5571==     in use at exit: 0 bytes in 0 blocks
==5571==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==5571== 
==5571== All heap blocks were freed -- no leaks are possible
==5571== 
==5571== For counts of detected and suppressed errors, rerun with: -v
==5571== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x13. More singly linked lists$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x13-more_singly_linked_lists</code></li>
            <li>File: <code>10-delete_nodeint.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="1002">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="1002" data-batch-id="24" data-toggle="modal" data-target="#task-1002-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-1002-users-done-modal" data-task-id="1002" data-batch-id="24">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "10. Delete at index"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>

    <p class="lg-gap">
      <form class="button_to" method="post" action="/projects/230/unlock_optionals"><input id="unlock_optional_btn" class="btn btn-primary btn-block" data-confirm="Are you sure? Make sure you focused on the mandatory tasks first" data-disable-with="Unlocking 4 advanced tasks..." type="submit" value="Done with the mandatory tasks? Unlock 4 advanced tasks now!" /><input type="hidden" name="authenticity_token" value="p4Lhk-umu_-Fwj4A-ApHzStMh8xlCv_c5EDBft5JyNDCXZgn1VemM6qIXKDKmsUT-o9gS00h2-T6nCpdyIU8sw" autocomplete="off" /></form>
    </p>





  </div>
</div>


      </article>

      <div class="copyright">Copyright © 2022 ALX, All rights reserved.</div>

    </main>
