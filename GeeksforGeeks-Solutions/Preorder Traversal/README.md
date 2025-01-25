<h2><a href="https://www.geeksforgeeks.org/problems/preorder-traversal/1">Preorder Traversal</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p style="font-family: &quot;ADLaM Display&quot;, Nunito;"><span style="font-size: 18px; font-family: &quot;ADLaM Display&quot;, Nunito;">Given a&nbsp;binary tree, find&nbsp;its&nbsp;preorder traversal.</span></p>
<p style="font-family: &quot;ADLaM Display&quot;, Nunito;"><span style="font-size: 18px; font-family: &quot;ADLaM Display&quot;, Nunito;"><strong style="font-family: &quot;ADLaM Display&quot;, &quot;Source Sans 3&quot;;">Examples:</strong></span></p>
<pre style="font-family: &quot;ADLaM Display&quot;, Nunito;"><span style="font-size: 18px; font-family: &quot;ADLaM Display&quot;, Nunito;"><strong style="font-family: &quot;ADLaM Display&quot;, &quot;Source Sans 3&quot;;">Input:</strong>
&nbsp; &nbsp; &nbsp; &nbsp; 1 &nbsp; &nbsp; &nbsp;
      /&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; 
    4 &nbsp; &nbsp;
  /&nbsp; &nbsp; \ &nbsp; 
4&nbsp; &nbsp; &nbsp; &nbsp;2
<strong style="font-family: &quot;ADLaM Display&quot;, &quot;Source Sans 3&quot;;">Output: </strong>[1, 4, 4, 2</span><span style="font-size: 22px; font-family: &quot;ADLaM Display&quot;, Nunito;">]</span>
</pre>
<pre style="font-family: &quot;ADLaM Display&quot;, Nunito;"><span style="font-size: 18px; font-family: &quot;ADLaM Display&quot;, Nunito;"><strong style="font-family: &quot;ADLaM Display&quot;, &quot;Source Sans 3&quot;;">Input:</strong>
       6
&nbsp;    /   \
&nbsp;   3     2
&nbsp;    \   / 
&nbsp;     1 2
<strong style="font-family: &quot;ADLaM Display&quot;, &quot;Source Sans 3&quot;;">Output: </strong>[6, 3, 1, 2, 2] </span></pre>
<pre style="font-family: &quot;ADLaM Display&quot;, Nunito;"><span style="font-size: 14pt; font-family: &quot;ADLaM Display&quot;, Nunito;"><strong style="font-size: 14pt; font-family: &quot;ADLaM Display&quot;, &quot;Source Sans 3&quot;;">Input:<br style="font-family: &quot;ADLaM Display&quot;, Nunito;"></strong><span style="font-size: 14pt; font-family: &quot;ADLaM Display&quot;, Nunito;"> </span><span style="font-size: 18.6667px; font-family: &quot;ADLaM Display&quot;, Nunito;">        8
       / \
      3   10
     / \    \
    1   6   14
       / \   /
      4   7 13
</span><strong style="font-size: 14pt; font-family: &quot;ADLaM Display&quot;, &quot;Source Sans 3&quot;;">Output:</strong><span style="font-size: 14pt; font-family: &quot;ADLaM Display&quot;, Nunito;"> [</span><span style="font-size: 18.6667px; font-family: &quot;ADLaM Display&quot;, Nunito;">8, 3, 1, 6, 4, 7, 10, 14, 13]</span></span></pre>
<p style="font-family: &quot;ADLaM Display&quot;, Nunito;"><span style="font-size: 18px; font-family: &quot;ADLaM Display&quot;, Nunito;"><strong style="font-family: &quot;ADLaM Display&quot;, &quot;Source Sans 3&quot;;">Constraints:</strong><br style="font-family: &quot;ADLaM Display&quot;, Nunito;">1 &lt;= number of nodes &lt;= 10<sup style="font-family: &quot;ADLaM Display&quot;, Nunito;">5</sup><br style="font-family: &quot;ADLaM Display&quot;, Nunito;">0 &lt;= node-&gt;data &lt;= 10<sup style="font-family: &quot;ADLaM Display&quot;, Nunito;">6</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Walmart</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;