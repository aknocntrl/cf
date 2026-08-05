<h2><a href="https://codeforces.com/contest/1493/problem/A" target="_blank" rel="noopener noreferrer">1493A — Anti-knapsack</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1493A](https://codeforces.com/contest/1493/problem/A) |

## Topics
`constructive algorithms` `greedy`

---

## Problem Statement

<div class="header"><div class="title">A. Anti-knapsack</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two integers $$$n$$$ and $$$k$$$. You are asked to choose maximum number of distinct integers from $$$1$$$ to $$$n$$$ so that there is no subset of chosen numbers with sum equal to $$$k$$$.</p><p>A subset of a set is a set that can be obtained from initial one by removing some (possibly all or none) elements of it.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains the number of test cases $$$T$$$ ($$$1 \le T \le 100$$$).</p><p>Each of the next $$$T$$$ lines contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le k \le n \le 1000$$$) — the description of test cases.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case output two lines. In the first line output a single integer $$$m$$$ — the number of chosen integers.</p><p>In the second line output $$$m$$$ distinct integers from $$$1$$$ to $$$n$$$ — the chosen numbers.</p><p>If there are multiple answers, print any. You can print the numbers in any order.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004325225320141216" id="id0017858061423326144" class="input-output-copier">Copy</div></div><pre id="id004325225320141216">3
3 2
5 3
1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0014822363786271175" id="id0026252030069106136" class="input-output-copier">Copy</div></div><pre id="id0014822363786271175">2
3 1 
3
4 5 2 
0

</pre></div></div></div>